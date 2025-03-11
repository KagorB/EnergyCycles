#include "EnergyCycles.h"

double** inversion(double** B, int N)
{
  double temp;
  double** A = new double* [N];

  for (int i = 0; i < N; i++)
    A[i] = new double[N];
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      A[i][j] = B[i][j];
  double** E = new double* [N];

  for (int i = 0; i < N; i++)
    E[i] = new double[N];

  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
    {
      E[i][j] = 0.0;

      if (i == j)
        E[i][j] = 1.0;
    }

  for (int k = 0; k < N; k++)
  {
    temp = A[k][k];

    for (int j = 0; j < N; j++)
    {
      A[k][j] /= temp;
      E[k][j] /= temp;
    }

    for (int i = k + 1; i < N; i++)
    {
      temp = A[i][k];

      for (int j = 0; j < N; j++)
      {
        A[i][j] -= A[k][j] * temp;
        E[i][j] -= E[k][j] * temp;
      }
    }
  }

  for (int k = N - 1; k > 0; k--)
  {
    for (int i = k - 1; i >= 0; i--)
    {
      temp = A[i][k];

      for (int j = 0; j < N; j++)
      {
        A[i][j] -= A[k][j] * temp;
        E[i][j] -= E[k][j] * temp;
      }
    }
  }

  return E;
}

double** MatrixMul(double** A, double** B, int N)
{
  double** C = new double* [N];
  for (int i = 0; i < N; i++) C[i] = new double[N];
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
    {
      C[i][j] = 0;
      for (int k = 0; k < N; k++)
        C[i][j] += A[i][k] * B[k][j];
    }
  return C;
}


void EigVec(double** X, double* val, double** eigvec, double* frecuency, int N) {
  MatrixXd A = MatrixXd(N, N);
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++) A(i, j) = X[i][j];
  EigenSolver<MatrixXd> es(A);
  VectorXd EigVal = es.eigenvalues().real();
  MatrixXd EigVec = es.eigenvectors().real();
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      eigvec[i][j] = round(EigVec(i, j) * 10000) / 10000;
  for (int i = 0; i < N; i++)
    val[i] = round(sqrt(abs(EigVal(i))) * 10000) / 10000;
  for (int i = 0; i < N; i++)
    frecuency[i] = round(val[i] / (2 * 3.14159265359) * 10000) / 10000;
}

int cmp(const void* a, const void* b)
{
  const double* ad, * bd;

  ad = (const double*)a;
  bd = (const double*)b;

  if (*ad < *bd)
  {
    return -1;
  }
  else if (*ad > *bd)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}


void VecSort(double* eigen, double** evec, double* freq, int N) {
  double* _fr = new double[N];
  for (int i = 0; i < N; i++) _fr[i] = freq[i];
  double* _eig = new double[N];
  for (int i = 0; i < N; i++) _eig[i] = eigen[i];
  qsort(_fr, N, sizeof(double), cmp);
  qsort(_eig, N, sizeof(double), cmp);
  double** _evec = new double* [N];
  for (int i = 0; i < N; i++) _evec[i] = new double[N];

  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++) {
      if (_fr[i] == freq[j]) {
        for (int k = 0; k < N; k++)
          _evec[k][i] = evec[k][j];
      }
    }
  for (int i = 0; i < N; i++) freq[i] = _fr[i];
  for (int i = 0; i < N; i++) eigen[i] = _eig[i];
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      evec[i][j] = _evec[i][j];
}


void MakeCycle(vector<Link>& tmp, double** arr, char type, int N) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i != j && arr[i][j] != 0) {
        tmp.push_back(Link(i + 1, j + 1, type));
      }
    }
  }
}


bool Used(Link tmp, vector<int> used) {
  bool res = true;
  for (int i = 0; i < used.size(); i++) {
    if (tmp.GetS() == used[i]) {
      res = false;
    }
  }
  return res;
}
void ReCycle(Link T, vector<Link> tmp, int start, vector<int>& used, vector<Link>& newvec, vector<vector<Link>>& chain)
{

  for (int i = 0; i < tmp.size(); i++)
  {
    if (tmp[i].GetS() == start && tmp[i].GetF() == T.GetS())
    {
      vector<Link> vec = newvec;
      vec.push_back(tmp[i]);
      chain.push_back(vec);
    }
    else if (tmp[i].GetS() != start && tmp[i].GetF() == T.GetS() && Used(tmp[i], used) == true) {
      vector<int> newuse = used;
      newuse.push_back(tmp[i].GetS());
      vector<Link> vec = newvec;
      vec.push_back(tmp[i]);
      ReCycle(tmp[i], tmp, start, newuse, vec, chain);
    }
  }
}


void FindCycle(vector<Link> tmp, vector<vector<Link>>& chain) {
  for (int i = 0; i < tmp.size(); i++)
  {
    if (tmp[i].GetT() == 'n' || tmp[i].GetT() == 'd' || tmp[i].GetT() == 's')
    {
      vector<Link> newvec;
      vector<int> used;
      newvec.push_back(tmp[i]);
      int start = tmp[i].GetF();
      used.push_back(tmp[i].GetS());
      ReCycle(tmp[i], tmp, start, used, newvec, chain);

    }
  }
}
double* FindJob(vector<Link> tmp, double** M, double** B, double** C, double* o, double** V, int k)
{
  double* job = new double[tmp.size()];
  for (int i = 0; i < tmp.size(); i++) {
    if (tmp[i].GetT() == 'n')
      job[i] = abs(pow(o[k], 3) * M[tmp[i].GetF() - 1][tmp[i].GetS() - 1] * V[tmp[i].GetF() - 1][k] * V[tmp[i].GetS() - 1][k]);
    else if (tmp[i].GetT() == 'd')
      job[i] = abs(pow(o[k], 2) * B[tmp[i].GetF() - 1][tmp[i].GetS() - 1] * V[tmp[i].GetF() - 1][k] * V[tmp[i].GetS() - 1][k]);
    else if (tmp[i].GetT() == 's')
      job[i] = abs(o[k] * C[tmp[i].GetF() - 1][tmp[i].GetS() - 1] * V[tmp[i].GetF() - 1][k] * V[tmp[i].GetS() - 1][k]);
    else if (tmp[i].GetT() == 'm' || tmp[i].GetT() == 'b' || tmp[i].GetT() == 'c')
      job[i] = 0;
  }
  return job;
}

double* CycleJob(vector<Link> tmp, vector<vector<Link>>& chain, double* job) {
  double* resjob = new double[chain.size()];
  for (int i = 0; i < chain.size(); i++)
    resjob[i] = 0;
  int count = 0;
  for (int i = 0; i < chain.size(); i++) {
    for (int j = 0; j < chain[i].size(); j++) {
      for (int k = 0; k < tmp.size(); k++) {
        if (tmp[k].GetF() == chain[i][j].GetF() && tmp[k].GetS() == chain[i][j].GetS() && tmp[k].GetT() == chain[i][j].GetT()) {
          resjob[count] += job[k];
        }
      }
    }
    resjob[count] = round(resjob[count] * 1000) / 1000;
    count++;
  }
  return resjob;
}

double* JobPercent(vector<vector<Link>> tmp, double* job) {
  double* per = new double[tmp.size()];
  double Sum = 0;
  for (int i = 0; i < tmp.size(); i++) {
    Sum += job[i];
  }
  for (int i = 0; i < tmp.size(); i++) {
    double k = (job[i] / Sum) * 100;
    per[i] = round(k * 100000) / 100000;
  }
  return per;
}

void FillMatrix(double** ur, double** M, double** B, double** C, int N)
{
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      C[i][j] = ur[i][j * 3];
    }
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      B[i][j] = ur[i][j * 3 + 1];
    }
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      M[i][j] = ur[i][j * 3 + 2];
    }
  }
}

void SegmentationMatrix(double** M, double** Mn, char type, int N)
{
  int j = 0;
  for (int i = 0; i < N; i++) {
    for (; j < N; j++) {
      if ((M[i][j] == M[j][i]) || (M[i][j] == -M[j][i] && type == 'b')) {
        Mn[j][i] = 0;
        Mn[i][j] = 0;
      }
      else
      {
        Mn[i][j] = M[i][j];
        Mn[j][i] = M[j][i];
        M[i][j] = 0;
        M[j][i] = 0;
      }
    }
    j = i + 1;
  }
}
