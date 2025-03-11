#pragma once

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <Eigen/Dense>
#include <Eigen/Eigenvalues>
#include "Link.h"

using namespace Eigen;
using namespace std;

double** inversion(double** B, int N);
double** MatrixMul(double** A, double** B, int N);
void EigVec(double** X, double* val, double** eigvec, double* frecuency, int N); 
int cmp(const void* a, const void* b);
void VecSort(double* eigen, double** evec, double* freq, int N);
void MakeCycle(vector<Link>& tmp, double** arr, char type, int N);
bool Used(Link tmp, vector<int> used);
void ReCycle(Link T, vector<Link> tmp, int start, vector<int>& used, vector<Link>& newvec, vector<vector<Link>>& chain);
void FindCycle(vector<Link> tmp, vector<vector<Link>>& chain);
double* FindJob(vector<Link> tmp, double** M, double** B, double** C, double* o, double** V, int k); 
double* CycleJob(vector<Link> tmp, vector<vector<Link>>& chain, double* job);
void FillMatrix(double** ur, double** M, double** B, double** C, int N);
void SegmentationMatrix(double** M, double** Mn, char type, int N);
