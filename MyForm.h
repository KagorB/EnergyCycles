#pragma once
#include "EnergyCycles.h"
namespace EnergyCycles {
  using namespace System;
  using namespace System::ComponentModel;
  using namespace System::Collections;
  using namespace System::Windows::Forms;
  using namespace System::Data;
  using namespace System::Drawing;

  /// <summary>
  /// Сводка для MyForm
  /// </summary>
  public ref class MyForm : public System::Windows::Forms::Form
  {
  public:
    MyForm(void)
    {
      InitializeComponent();
      //
      //TODO: добавьте код конструктора
      //
    }

  protected:
    /// <summary>
    /// Освободить все используемые ресурсы.
    /// </summary>
    ~MyForm()
    {
      if (components)
      {
        delete components;
      }
    }
  private: System::Windows::Forms::TabPage^ tabPage6;
  protected:

  private: System::Windows::Forms::DataGridView^ dataGridView6;
  private: System::Windows::Forms::TabPage^ tabPage5;
  private: System::Windows::Forms::Label^ label20;
  private: System::Windows::Forms::DataGridView^ dataGridView5;
  private: System::Windows::Forms::TabPage^ tabPage2;
  private: System::Windows::Forms::TabControl^ tabControl3;
  private: System::Windows::Forms::TabPage^ tabPage10;
  private: System::Windows::Forms::Label^ label3;
  private: System::Windows::Forms::DataGridView^ dataGridView2;
  private: System::Windows::Forms::TabPage^ tabPage11;
  private: System::Windows::Forms::Label^ label17;
  private: System::Windows::Forms::DataGridView^ dataGridView1;
  private: System::Windows::Forms::TabPage^ tabPage12;
  private: System::Windows::Forms::Label^ label18;
  private: System::Windows::Forms::DataGridView^ dataGridView3;
  private: System::Windows::Forms::TabPage^ tabPage1;
  private: System::Windows::Forms::Label^ label1;
  private: System::Windows::Forms::DataGridView^ dataGridView9;
  private: System::Windows::Forms::TextBox^ textBox1;
  private: System::Windows::Forms::Button^ button2;
  private: System::Windows::Forms::Button^ button1;
  private: System::Windows::Forms::TabControl^ tabControl1;
  private: System::Windows::Forms::Label^ label2;
  private: System::Windows::Forms::Label^ label11;
  private: System::Windows::Forms::Label^ label10;
  private: System::Windows::Forms::Label^ label9;
  private: System::Windows::Forms::Label^ label8;
  private: System::Windows::Forms::Label^ label6;
  private: System::Windows::Forms::Label^ label5;
  private: System::Windows::Forms::Label^ label4;
  private: System::Windows::Forms::TabPage^ tabPage4;
  private: System::Windows::Forms::TabControl^ tabControl5;
  private: System::Windows::Forms::TabPage^ tabPage7;
  private: System::Windows::Forms::Label^ label12;
  private: System::Windows::Forms::DataGridView^ dataGridView10;
  private: System::Windows::Forms::TabPage^ tabPage15;
  private: System::Windows::Forms::Label^ label13;
  private: System::Windows::Forms::DataGridView^ dataGridView11;
  private: System::Windows::Forms::TabPage^ tabPage16;
  private: System::Windows::Forms::Label^ label14;
  private: System::Windows::Forms::DataGridView^ dataGridView12;
  private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
  private: System::Windows::Forms::Label^ label15;
  private: System::Windows::Forms::Label^ label7;
  private: System::Windows::Forms::Label^ label24;
  private: System::Windows::Forms::Label^ label23;
  private: System::Windows::Forms::Label^ label22;
  private: System::Windows::Forms::Label^ label21;
  private: System::Windows::Forms::Label^ label19;
  private: System::Windows::Forms::Label^ label16;

  private:
    /// <summary>
    /// Обязательная переменная конструктора.
    /// </summary>
    System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
    /// <summary>
    /// Требуемый метод для поддержки конструктора — не изменяйте 
    /// содержимое этого метода с помощью редактора кода.
    /// </summary>
    void InitializeComponent(void)
    {
      this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
      this->label7 = (gcnew System::Windows::Forms::Label());
      this->label24 = (gcnew System::Windows::Forms::Label());
      this->label23 = (gcnew System::Windows::Forms::Label());
      this->label22 = (gcnew System::Windows::Forms::Label());
      this->label21 = (gcnew System::Windows::Forms::Label());
      this->label19 = (gcnew System::Windows::Forms::Label());
      this->label16 = (gcnew System::Windows::Forms::Label());
      this->label15 = (gcnew System::Windows::Forms::Label());
      this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
      this->label11 = (gcnew System::Windows::Forms::Label());
      this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
      this->label10 = (gcnew System::Windows::Forms::Label());
      this->label9 = (gcnew System::Windows::Forms::Label());
      this->label8 = (gcnew System::Windows::Forms::Label());
      this->label6 = (gcnew System::Windows::Forms::Label());
      this->label5 = (gcnew System::Windows::Forms::Label());
      this->label4 = (gcnew System::Windows::Forms::Label());
      this->label2 = (gcnew System::Windows::Forms::Label());
      this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
      this->label20 = (gcnew System::Windows::Forms::Label());
      this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
      this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
      this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
      this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
      this->label3 = (gcnew System::Windows::Forms::Label());
      this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
      this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
      this->label17 = (gcnew System::Windows::Forms::Label());
      this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
      this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
      this->label18 = (gcnew System::Windows::Forms::Label());
      this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
      this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
      this->label1 = (gcnew System::Windows::Forms::Label());
      this->dataGridView9 = (gcnew System::Windows::Forms::DataGridView());
      this->textBox1 = (gcnew System::Windows::Forms::TextBox());
      this->button2 = (gcnew System::Windows::Forms::Button());
      this->button1 = (gcnew System::Windows::Forms::Button());
      this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
      this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
      this->tabControl5 = (gcnew System::Windows::Forms::TabControl());
      this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
      this->label12 = (gcnew System::Windows::Forms::Label());
      this->dataGridView10 = (gcnew System::Windows::Forms::DataGridView());
      this->tabPage15 = (gcnew System::Windows::Forms::TabPage());
      this->label13 = (gcnew System::Windows::Forms::Label());
      this->dataGridView11 = (gcnew System::Windows::Forms::DataGridView());
      this->tabPage16 = (gcnew System::Windows::Forms::TabPage());
      this->label14 = (gcnew System::Windows::Forms::Label());
      this->dataGridView12 = (gcnew System::Windows::Forms::DataGridView());
      this->tabPage6->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
      this->tabPage5->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
      this->tabPage2->SuspendLayout();
      this->tabControl3->SuspendLayout();
      this->tabPage10->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
      this->tabPage11->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
      this->tabPage12->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
      this->tabPage1->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView9))->BeginInit();
      this->tabControl1->SuspendLayout();
      this->tabPage4->SuspendLayout();
      this->tabControl5->SuspendLayout();
      this->tabPage7->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView10))->BeginInit();
      this->tabPage15->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView11))->BeginInit();
      this->tabPage16->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView12))->BeginInit();
      this->SuspendLayout();
      // 
      // tabPage6
      // 
      this->tabPage6->Controls->Add(this->label7);
      this->tabPage6->Controls->Add(this->label24);
      this->tabPage6->Controls->Add(this->label23);
      this->tabPage6->Controls->Add(this->label22);
      this->tabPage6->Controls->Add(this->label21);
      this->tabPage6->Controls->Add(this->label19);
      this->tabPage6->Controls->Add(this->label16);
      this->tabPage6->Controls->Add(this->label15);
      this->tabPage6->Controls->Add(this->numericUpDown1);
      this->tabPage6->Controls->Add(this->label11);
      this->tabPage6->Controls->Add(this->dataGridView6);
      this->tabPage6->Controls->Add(this->label10);
      this->tabPage6->Controls->Add(this->label9);
      this->tabPage6->Controls->Add(this->label8);
      this->tabPage6->Controls->Add(this->label6);
      this->tabPage6->Controls->Add(this->label5);
      this->tabPage6->Controls->Add(this->label4);
      this->tabPage6->Controls->Add(this->label2);
      this->tabPage6->Location = System::Drawing::Point(4, 22);
      this->tabPage6->Name = L"tabPage6";
      this->tabPage6->Size = System::Drawing::Size(519, 385);
      this->tabPage6->TabIndex = 5;
      this->tabPage6->Text = L"Циклы";
      this->tabPage6->UseVisualStyleBackColor = true;
      // 
      // label7
      // 
      this->label7->AutoSize = true;
      this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label7->Location = System::Drawing::Point(400, 165);
      this->label7->Name = L"label7";
      this->label7->Size = System::Drawing::Size(61, 20);
      this->label7->TabIndex = 27;
      this->label7->Text = L"------->";
      // 
      // label24
      // 
      this->label24->AutoSize = true;
      this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label24->Location = System::Drawing::Point(400, 235);
      this->label24->Name = L"label24";
      this->label24->Size = System::Drawing::Size(59, 20);
      this->label24->TabIndex = 26;
      this->label24->Text = L"--*--*--";
      // 
      // label23
      // 
      this->label23->AutoSize = true;
      this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label23->Location = System::Drawing::Point(400, 275);
      this->label23->Name = L"label23";
      this->label23->Size = System::Drawing::Size(55, 20);
      this->label23->TabIndex = 25;
      this->label23->Text = L"-- -- --";
      // 
      // label22
      // 
      this->label22->AutoSize = true;
      this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label22->Location = System::Drawing::Point(391, 295);
      this->label22->Name = L"label22";
      this->label22->Size = System::Drawing::Size(100, 20);
      this->label22->TabIndex = 24;
      this->label22->Text = L"Жесткости";
      // 
      // label21
      // 
      this->label21->AutoSize = true;
      this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label21->Location = System::Drawing::Point(391, 255);
      this->label21->Name = L"label21";
      this->label21->Size = System::Drawing::Size(110, 20);
      this->label21->TabIndex = 23;
      this->label21->Text = L"Диссипации";
      // 
      // label19
      // 
      this->label19->AutoSize = true;
      this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label19->Location = System::Drawing::Point(391, 215);
      this->label19->Name = L"label19";
      this->label19->Size = System::Drawing::Size(111, 20);
      this->label19->TabIndex = 22;
      this->label19->Text = L"Инерционая";
      // 
      // label16
      // 
      this->label16->AutoSize = true;
      this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label16->Location = System::Drawing::Point(376, 185);
      this->label16->Name = L"label16";
      this->label16->Size = System::Drawing::Size(94, 20);
      this->label16->TabIndex = 21;
      this->label16->Text = L"Взаимные";
      // 
      // label15
      // 
      this->label15->AutoSize = true;
      this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label15->Location = System::Drawing::Point(23, 15);
      this->label15->Name = L"label15";
      this->label15->Size = System::Drawing::Size(334, 20);
      this->label15->TabIndex = 20;
      this->label15->Text = L"ЦИКЛЫ НА 1-ОЙ ФОРМЕ КОЛЕБАНИЙ\r\n";
      this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
      // 
      // numericUpDown1
      // 
      this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->numericUpDown1->Location = System::Drawing::Point(461, 346);
      this->numericUpDown1->Name = L"numericUpDown1";
      this->numericUpDown1->Size = System::Drawing::Size(50, 26);
      this->numericUpDown1->TabIndex = 19;
      this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
      // 
      // label11
      // 
      this->label11->AutoSize = true;
      this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label11->Location = System::Drawing::Point(400, 315);
      this->label11->Name = L"label11";
      this->label11->Size = System::Drawing::Size(57, 20);
      this->label11->TabIndex = 18;
      this->label11->Text = L"--------";
      // 
      // dataGridView6
      // 
      this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView6->Location = System::Drawing::Point(22, 38);
      this->dataGridView6->Name = L"dataGridView6";
      this->dataGridView6->Size = System::Drawing::Size(340, 334);
      this->dataGridView6->TabIndex = 9;
      this->dataGridView6->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView6_CellContentClick_1);
      // 
      // label10
      // 
      this->label10->AutoSize = true;
      this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label10->Location = System::Drawing::Point(391, 145);
      this->label10->Name = L"label10";
      this->label10->Size = System::Drawing::Size(100, 20);
      this->label10->TabIndex = 17;
      this->label10->Text = L"Жесткости";
      // 
      // label9
      // 
      this->label9->AutoSize = true;
      this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label9->Location = System::Drawing::Point(400, 125);
      this->label9->Name = L"label9";
      this->label9->Size = System::Drawing::Size(65, 20);
      this->label9->TabIndex = 16;
      this->label9->Text = L"-- -- -->";
      this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
      // 
      // label8
      // 
      this->label8->AutoSize = true;
      this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label8->Location = System::Drawing::Point(391, 105);
      this->label8->Name = L"label8";
      this->label8->Size = System::Drawing::Size(110, 20);
      this->label8->TabIndex = 15;
      this->label8->Text = L"Диссипации";
      // 
      // label6
      // 
      this->label6->AutoSize = true;
      this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label6->Location = System::Drawing::Point(391, 65);
      this->label6->Name = L"label6";
      this->label6->Size = System::Drawing::Size(111, 20);
      this->label6->TabIndex = 13;
      this->label6->Text = L"Инерционая";
      // 
      // label5
      // 
      this->label5->AutoSize = true;
      this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label5->Location = System::Drawing::Point(400, 85);
      this->label5->Name = L"label5";
      this->label5->Size = System::Drawing::Size(69, 20);
      this->label5->TabIndex = 12;
      this->label5->Text = L"--*--*-->";
      this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
      // 
      // label4
      // 
      this->label4->AutoSize = true;
      this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label4->Location = System::Drawing::Point(376, 39);
      this->label4->Name = L"label4";
      this->label4->Size = System::Drawing::Size(135, 20);
      this->label4->TabIndex = 11;
      this->label4->Text = L"Направленные";
      // 
      // label2
      // 
      this->label2->AutoSize = true;
      this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label2->Location = System::Drawing::Point(368, 15);
      this->label2->Name = L"label2";
      this->label2->Size = System::Drawing::Size(143, 24);
      this->label2->TabIndex = 10;
      this->label2->Text = L"Виды связей:";
      this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_1);
      // 
      // tabPage5
      // 
      this->tabPage5->Controls->Add(this->label20);
      this->tabPage5->Controls->Add(this->dataGridView5);
      this->tabPage5->Location = System::Drawing::Point(4, 22);
      this->tabPage5->Name = L"tabPage5";
      this->tabPage5->Padding = System::Windows::Forms::Padding(3);
      this->tabPage5->Size = System::Drawing::Size(519, 385);
      this->tabPage5->TabIndex = 4;
      this->tabPage5->Text = L"Векторы";
      this->tabPage5->UseVisualStyleBackColor = true;
      // 
      // label20
      // 
      this->label20->AutoSize = true;
      this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label20->Location = System::Drawing::Point(91, 14);
      this->label20->Name = L"label20";
      this->label20->Size = System::Drawing::Size(338, 20);
      this->label20->TabIndex = 7;
      this->label20->Text = L"СОБСТВЕННЫЕ ЧАСТОТЫ И ВЕКТОРЫ";
      this->label20->Click += gcnew System::EventHandler(this, &MyForm::label20_Click);
      // 
      // dataGridView5
      // 
      this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView5->Location = System::Drawing::Point(23, 57);
      this->dataGridView5->Name = L"dataGridView5";
      this->dataGridView5->Size = System::Drawing::Size(470, 299);
      this->dataGridView5->TabIndex = 6;
      this->dataGridView5->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView5_CellContentClick);
      // 
      // tabPage2
      // 
      this->tabPage2->Controls->Add(this->tabControl3);
      this->tabPage2->Location = System::Drawing::Point(4, 22);
      this->tabPage2->Name = L"tabPage2";
      this->tabPage2->Padding = System::Windows::Forms::Padding(3);
      this->tabPage2->Size = System::Drawing::Size(519, 385);
      this->tabPage2->TabIndex = 1;
      this->tabPage2->Text = L"Взаимные связи";
      this->tabPage2->UseVisualStyleBackColor = true;
      // 
      // tabControl3
      // 
      this->tabControl3->Controls->Add(this->tabPage10);
      this->tabControl3->Controls->Add(this->tabPage11);
      this->tabControl3->Controls->Add(this->tabPage12);
      this->tabControl3->Location = System::Drawing::Point(24, 20);
      this->tabControl3->Name = L"tabControl3";
      this->tabControl3->SelectedIndex = 0;
      this->tabControl3->Size = System::Drawing::Size(470, 345);
      this->tabControl3->TabIndex = 6;
      // 
      // tabPage10
      // 
      this->tabPage10->Controls->Add(this->label3);
      this->tabPage10->Controls->Add(this->dataGridView2);
      this->tabPage10->Location = System::Drawing::Point(4, 22);
      this->tabPage10->Name = L"tabPage10";
      this->tabPage10->Padding = System::Windows::Forms::Padding(3);
      this->tabPage10->Size = System::Drawing::Size(462, 319);
      this->tabPage10->TabIndex = 0;
      this->tabPage10->Text = L"M";
      this->tabPage10->UseVisualStyleBackColor = true;
      // 
      // label3
      // 
      this->label3->AutoSize = true;
      this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label3->Location = System::Drawing::Point(20, 20);
      this->label3->Name = L"label3";
      this->label3->Size = System::Drawing::Size(183, 20);
      this->label3->TabIndex = 2;
      this->label3->Text = L"МАТРИЦА ИНЕРЦИИ";
      // 
      // dataGridView2
      // 
      this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView2->Location = System::Drawing::Point(20, 50);
      this->dataGridView2->Name = L"dataGridView2";
      this->dataGridView2->Size = System::Drawing::Size(420, 250);
      this->dataGridView2->TabIndex = 3;
      this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
      // 
      // tabPage11
      // 
      this->tabPage11->Controls->Add(this->label17);
      this->tabPage11->Controls->Add(this->dataGridView1);
      this->tabPage11->Location = System::Drawing::Point(4, 22);
      this->tabPage11->Name = L"tabPage11";
      this->tabPage11->Padding = System::Windows::Forms::Padding(3);
      this->tabPage11->Size = System::Drawing::Size(462, 319);
      this->tabPage11->TabIndex = 1;
      this->tabPage11->Text = L"B";
      this->tabPage11->UseVisualStyleBackColor = true;
      // 
      // label17
      // 
      this->label17->AutoSize = true;
      this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label17->Location = System::Drawing::Point(20, 20);
      this->label17->Name = L"label17";
      this->label17->Size = System::Drawing::Size(221, 20);
      this->label17->TabIndex = 5;
      this->label17->Text = L"МАТРИЦА ДИССИПАЦИИ";
      // 
      // dataGridView1
      // 
      this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView1->Location = System::Drawing::Point(20, 50);
      this->dataGridView1->Name = L"dataGridView1";
      this->dataGridView1->Size = System::Drawing::Size(420, 250);
      this->dataGridView1->TabIndex = 4;
      this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
      // 
      // tabPage12
      // 
      this->tabPage12->Controls->Add(this->label18);
      this->tabPage12->Controls->Add(this->dataGridView3);
      this->tabPage12->Location = System::Drawing::Point(4, 22);
      this->tabPage12->Name = L"tabPage12";
      this->tabPage12->Padding = System::Windows::Forms::Padding(3);
      this->tabPage12->Size = System::Drawing::Size(462, 319);
      this->tabPage12->TabIndex = 2;
      this->tabPage12->Text = L"C";
      this->tabPage12->UseVisualStyleBackColor = true;
      // 
      // label18
      // 
      this->label18->AutoSize = true;
      this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label18->Location = System::Drawing::Point(20, 20);
      this->label18->Name = L"label18";
      this->label18->Size = System::Drawing::Size(204, 20);
      this->label18->TabIndex = 9;
      this->label18->Text = L"МАТРИЦА ЖЕСТКОСТИ";
      this->label18->Click += gcnew System::EventHandler(this, &MyForm::label18_Click_1);
      // 
      // dataGridView3
      // 
      this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView3->Location = System::Drawing::Point(20, 50);
      this->dataGridView3->Name = L"dataGridView3";
      this->dataGridView3->Size = System::Drawing::Size(420, 250);
      this->dataGridView3->TabIndex = 8;
      this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView3_CellContentClick_2);
      // 
      // tabPage1
      // 
      this->tabPage1->Controls->Add(this->label1);
      this->tabPage1->Controls->Add(this->dataGridView9);
      this->tabPage1->Controls->Add(this->textBox1);
      this->tabPage1->Controls->Add(this->button2);
      this->tabPage1->Controls->Add(this->button1);
      this->tabPage1->Location = System::Drawing::Point(4, 22);
      this->tabPage1->Name = L"tabPage1";
      this->tabPage1->Padding = System::Windows::Forms::Padding(3);
      this->tabPage1->Size = System::Drawing::Size(519, 385);
      this->tabPage1->TabIndex = 0;
      this->tabPage1->Text = L"Ввод";
      this->tabPage1->UseVisualStyleBackColor = true;
      this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
      // 
      // label1
      // 
      this->label1->AutoSize = true;
      this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
      this->label1->Location = System::Drawing::Point(145, 14);
      this->label1->Name = L"label1";
      this->label1->Size = System::Drawing::Size(207, 20);
      this->label1->TabIndex = 11;
      this->label1->Text = L"МАТРИЦА УРАВНЕНИЯ";
      // 
      // dataGridView9
      // 
      this->dataGridView9->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView9->Location = System::Drawing::Point(11, 46);
      this->dataGridView9->Name = L"dataGridView9";
      this->dataGridView9->Size = System::Drawing::Size(496, 263);
      this->dataGridView9->TabIndex = 8;
      this->dataGridView9->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView9_CellContentClick);
      // 
      // textBox1
      // 
      this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->textBox1->Location = System::Drawing::Point(32, 342);
      this->textBox1->Name = L"textBox1";
      this->textBox1->Size = System::Drawing::Size(104, 26);
      this->textBox1->TabIndex = 2;
      this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_2);
      // 
      // button2
      // 
      this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->button2->Location = System::Drawing::Point(377, 335);
      this->button2->Name = L"button2";
      this->button2->Size = System::Drawing::Size(111, 36);
      this->button2->TabIndex = 1;
      this->button2->Text = L"РЕШИТЬ";
      this->button2->UseVisualStyleBackColor = true;
      this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
      // 
      // button1
      // 
      this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->button1->Location = System::Drawing::Point(230, 335);
      this->button1->Name = L"button1";
      this->button1->Size = System::Drawing::Size(122, 36);
      this->button1->TabIndex = 0;
      this->button1->Text = L"ВВЕСТИ N";
      this->button1->UseVisualStyleBackColor = true;
      this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
      // 
      // tabControl1
      // 
      this->tabControl1->Controls->Add(this->tabPage1);
      this->tabControl1->Controls->Add(this->tabPage2);
      this->tabControl1->Controls->Add(this->tabPage4);
      this->tabControl1->Controls->Add(this->tabPage5);
      this->tabControl1->Controls->Add(this->tabPage6);
      this->tabControl1->Location = System::Drawing::Point(-1, 2);
      this->tabControl1->Name = L"tabControl1";
      this->tabControl1->SelectedIndex = 0;
      this->tabControl1->Size = System::Drawing::Size(527, 411);
      this->tabControl1->TabIndex = 0;
      // 
      // tabPage4
      // 
      this->tabPage4->Controls->Add(this->tabControl5);
      this->tabPage4->Location = System::Drawing::Point(4, 22);
      this->tabPage4->Name = L"tabPage4";
      this->tabPage4->Padding = System::Windows::Forms::Padding(3);
      this->tabPage4->Size = System::Drawing::Size(519, 385);
      this->tabPage4->TabIndex = 6;
      this->tabPage4->Text = L"Направленные связи";
      this->tabPage4->UseVisualStyleBackColor = true;
      // 
      // tabControl5
      // 
      this->tabControl5->Controls->Add(this->tabPage7);
      this->tabControl5->Controls->Add(this->tabPage15);
      this->tabControl5->Controls->Add(this->tabPage16);
      this->tabControl5->Location = System::Drawing::Point(24, 20);
      this->tabControl5->Name = L"tabControl5";
      this->tabControl5->SelectedIndex = 0;
      this->tabControl5->Size = System::Drawing::Size(470, 345);
      this->tabControl5->TabIndex = 7;
      // 
      // tabPage7
      // 
      this->tabPage7->Controls->Add(this->label12);
      this->tabPage7->Controls->Add(this->dataGridView10);
      this->tabPage7->Location = System::Drawing::Point(4, 22);
      this->tabPage7->Name = L"tabPage7";
      this->tabPage7->Padding = System::Windows::Forms::Padding(3);
      this->tabPage7->Size = System::Drawing::Size(462, 319);
      this->tabPage7->TabIndex = 0;
      this->tabPage7->Text = L"M";
      this->tabPage7->UseVisualStyleBackColor = true;
      // 
      // label12
      // 
      this->label12->AutoSize = true;
      this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label12->Location = System::Drawing::Point(20, 20);
      this->label12->Name = L"label12";
      this->label12->Size = System::Drawing::Size(183, 20);
      this->label12->TabIndex = 2;
      this->label12->Text = L"МАТРИЦА ИНЕРЦИИ";
      // 
      // dataGridView10
      // 
      this->dataGridView10->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView10->Location = System::Drawing::Point(20, 50);
      this->dataGridView10->Name = L"dataGridView10";
      this->dataGridView10->Size = System::Drawing::Size(420, 250);
      this->dataGridView10->TabIndex = 3;
      this->dataGridView10->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView10_CellContentClick);
      // 
      // tabPage15
      // 
      this->tabPage15->Controls->Add(this->label13);
      this->tabPage15->Controls->Add(this->dataGridView11);
      this->tabPage15->Location = System::Drawing::Point(4, 22);
      this->tabPage15->Name = L"tabPage15";
      this->tabPage15->Padding = System::Windows::Forms::Padding(3);
      this->tabPage15->Size = System::Drawing::Size(462, 319);
      this->tabPage15->TabIndex = 1;
      this->tabPage15->Text = L"B";
      this->tabPage15->UseVisualStyleBackColor = true;
      // 
      // label13
      // 
      this->label13->AutoSize = true;
      this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label13->Location = System::Drawing::Point(20, 20);
      this->label13->Name = L"label13";
      this->label13->Size = System::Drawing::Size(221, 20);
      this->label13->TabIndex = 5;
      this->label13->Text = L"МАТРИЦА ДИССИПАЦИИ";
      // 
      // dataGridView11
      // 
      this->dataGridView11->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView11->Location = System::Drawing::Point(20, 50);
      this->dataGridView11->Name = L"dataGridView11";
      this->dataGridView11->Size = System::Drawing::Size(420, 250);
      this->dataGridView11->TabIndex = 4;
      this->dataGridView11->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView11_CellContentClick);
      // 
      // tabPage16
      // 
      this->tabPage16->Controls->Add(this->label14);
      this->tabPage16->Controls->Add(this->dataGridView12);
      this->tabPage16->Location = System::Drawing::Point(4, 22);
      this->tabPage16->Name = L"tabPage16";
      this->tabPage16->Padding = System::Windows::Forms::Padding(3);
      this->tabPage16->Size = System::Drawing::Size(462, 319);
      this->tabPage16->TabIndex = 2;
      this->tabPage16->Text = L"C";
      this->tabPage16->UseVisualStyleBackColor = true;
      // 
      // label14
      // 
      this->label14->AutoSize = true;
      this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label14->Location = System::Drawing::Point(20, 20);
      this->label14->Name = L"label14";
      this->label14->Size = System::Drawing::Size(204, 20);
      this->label14->TabIndex = 9;
      this->label14->Text = L"МАТРИЦА ЖЕСТКОСТИ";
      // 
      // dataGridView12
      // 
      this->dataGridView12->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView12->Location = System::Drawing::Point(20, 50);
      this->dataGridView12->Name = L"dataGridView12";
      this->dataGridView12->Size = System::Drawing::Size(420, 250);
      this->dataGridView12->TabIndex = 8;
      this->dataGridView12->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView12_CellContentClick);
      // 
      // MyForm
      // 
      this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
      this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
      this->ClientSize = System::Drawing::Size(521, 407);
      this->Controls->Add(this->tabControl1);
      this->Name = L"MyForm";
      this->Text = L"MyForm";
      this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
      this->tabPage6->ResumeLayout(false);
      this->tabPage6->PerformLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
      this->tabPage5->ResumeLayout(false);
      this->tabPage5->PerformLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
      this->tabPage2->ResumeLayout(false);
      this->tabControl3->ResumeLayout(false);
      this->tabPage10->ResumeLayout(false);
      this->tabPage10->PerformLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
      this->tabPage11->ResumeLayout(false);
      this->tabPage11->PerformLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
      this->tabPage12->ResumeLayout(false);
      this->tabPage12->PerformLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
      this->tabPage1->ResumeLayout(false);
      this->tabPage1->PerformLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView9))->EndInit();
      this->tabControl1->ResumeLayout(false);
      this->tabPage4->ResumeLayout(false);
      this->tabControl5->ResumeLayout(false);
      this->tabPage7->ResumeLayout(false);
      this->tabPage7->PerformLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView10))->EndInit();
      this->tabPage15->ResumeLayout(false);
      this->tabPage15->PerformLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView11))->EndInit();
      this->tabPage16->ResumeLayout(false);
      this->tabPage16->PerformLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView12))->EndInit();
      this->ResumeLayout(false);

    }
#pragma endregion

  public:
    int N = 1;
    int K = 0;
    double** M = new double* [N];
    double** C = new double* [N];
    double** M_1C = new double* [N];
    double* eigen = new double[N];
    double** evec = new double* [N];
    double* freq = new double[N];
    double** B = new double* [N];
    double** S = new double* [N];
    double** UR = new double* [N];
    double** Mn = new double* [N];
    double** Bn = new double* [N];
    double** Cn = new double* [N];
  private:
    System::Void MyForm_Load(System::Object^ sender,
      System::EventArgs^ e) {}
  private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {


  }

  public: System::Void ReadInfo() {
    M = new double* [N];
    C = new double* [N];
    M_1C = new double* [N];
    eigen = new double[N];
    evec = new double* [N];
    freq = new double[N];
    B = new double* [N];
    UR = new double* [N];
    Mn = new double* [N];
    Bn = new double* [N];
    Cn = new double* [N];
    for (int i = 0; i < N; i++) UR[i] = new double[N * 3];
    for (int i = 0; i < N; i++) evec[i] = new double[N];
    for (int i = 0; i < N; i++) B[i] = new double[N];
    for (int i = 0; i < N; i++) M_1C[i] = new double[N];
    for (int i = 0; i < N; i++) C[i] = new double[N];
    for (int i = 0; i < N; i++) M[i] = new double[N];
    for (int i = 0; i < N; i++) Mn[i] = new double[N];
    for (int i = 0; i < N; i++) Bn[i] = new double[N];
    for (int i = 0; i < N; i++) Cn[i] = new double[N];
  }

  private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

  }
  private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
  }

  private: System::Void dataGridView3_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
  }
  private: System::Void dataGridView4_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
  }
  private: System::Void dataGridView5_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
  }
  private: System::Void dataGridView6_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
  }
  private: System::Void dataGridView7_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
  }
  private: System::Void dataGridView8_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
  }
  private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
  }
  public: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
    N = Int32::Parse(textBox1->Text);
    dataGridView9->ColumnCount = N * 3;
    dataGridView9->RowCount = N;
    for (int i = 0; i < N; i++) {
      dataGridView9->Rows[i]->Height = (dataGridView9->Height - 2.5 * (dataGridView9->ColumnHeadersHeight)) / N;
    }
    for (int i = 0; i < N * 3; i++) {
      dataGridView9->Columns[i]->DefaultCellStyle->WrapMode = DataGridViewTriState::True;

      dataGridView9->Columns[i]->Width = floor((dataGridView9->Width - dataGridView9->RowHeadersWidth) / (N * 3 * 1.001));
    }
    ReadInfo();
    dataGridView1->ColumnCount = N;
    dataGridView1->RowCount = N;
    dataGridView2->ColumnCount = N;
    dataGridView2->RowCount = N;
    dataGridView3->ColumnCount = N;
    dataGridView3->RowCount = N;
    dataGridView5->ColumnCount = N;
    dataGridView5->RowCount = N + 2;
    dataGridView10->ColumnCount = N;
    dataGridView10->RowCount = N;
    dataGridView11->ColumnCount = N;
    dataGridView11->RowCount = N;
    dataGridView12->ColumnCount = N;
    dataGridView12->RowCount = N;
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        dataGridView1[j, i]->Value = 0;
        dataGridView3[j, i]->Value = 0;
        dataGridView2[j, i]->Value = 0;
        dataGridView10[j, i]->Value = 0;
        dataGridView11[j, i]->Value = 0;
        dataGridView12[j, i]->Value = 0;
      }
    }
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N * 3; j++) {
        dataGridView9[j, i]->Value = 0;
      }
    }
    for (int i = 0; i < N; i++) {
      dataGridView2->Columns[i]->HeaderCell->Value = Convert::ToString(i + 1);
      dataGridView2->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
      dataGridView1->Columns[i]->HeaderCell->Value = Convert::ToString(i + 1);
      dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
      dataGridView3->Columns[i]->HeaderCell->Value = Convert::ToString(i + 1);
      dataGridView3->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
      dataGridView9->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
      dataGridView10->Columns[i]->HeaderCell->Value = Convert::ToString(i + 1);
      dataGridView10->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
      dataGridView11->Columns[i]->HeaderCell->Value = Convert::ToString(i + 1);
      dataGridView11->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
      dataGridView12->Columns[i]->HeaderCell->Value = Convert::ToString(i + 1);
      dataGridView12->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
    }
    int k = 1;
    for (int i = 0; i < N * 3; i++) {
      string tmp1 = to_string(k);
      tmp1 += "'";
      string tmp2 = to_string(k);
      tmp2 += "''";
      dataGridView9->Columns[i]->HeaderCell->Value = Convert::ToString(k);
      dataGridView9->Columns[i + 1]->HeaderCell->Value = gcnew String(tmp1.c_str());
      dataGridView9->Columns[i + 2]->HeaderCell->Value = gcnew String(tmp2.c_str());
      i += 2;
      k++;
    }
    for (int i = 0; i < N; i++) {
      string tmp1 = to_string(i + 1);
      string tmp2 = "V[";
      tmp2 += to_string(i + 1);
      tmp2 += "]";
      dataGridView5->Columns[i]->HeaderCell->Value = gcnew String(tmp1.c_str());
      dataGridView5->Rows[i + 2]->HeaderCell->Value = gcnew String(tmp2.c_str());
    }
    dataGridView5->Rows[0]->HeaderCell->Value = "Собственные частоты (Гц)";
    dataGridView5->Rows[1]->HeaderCell->Value = "Собственные числа";
    dataGridView5->TopLeftHeaderCell->Value = "Порядковый номер";
    dataGridView5->RowHeadersWidth = 110;
    for (int i = 0; i < N; i++) {
      dataGridView1->Rows[i]->Height = floor((dataGridView1->Height - dataGridView1->ColumnHeadersHeight) / (N * 1.01));
      dataGridView1->Columns[i]->Width = floor((dataGridView1->Width - dataGridView1->RowHeadersWidth) / (N * 1.01));
      dataGridView2->Rows[i]->Height = floor((dataGridView2->Height - dataGridView2->ColumnHeadersHeight) / (N * 1.01));
      dataGridView2->Columns[i]->Width = floor((dataGridView2->Width - dataGridView2->RowHeadersWidth) / (N * 1.01));
      dataGridView3->Rows[i]->Height = floor((dataGridView3->Height - dataGridView3->ColumnHeadersHeight) / (N * 1.01));
      dataGridView3->Columns[i]->Width = floor((dataGridView3->Width - dataGridView3->RowHeadersWidth) / (N * 1.01));
      dataGridView10->Rows[i]->Height = floor((dataGridView10->Height - dataGridView10->ColumnHeadersHeight) / (N * 1.01));
      dataGridView10->Columns[i]->Width = floor((dataGridView10->Width - dataGridView10->RowHeadersWidth) / (N * 1.01));
      dataGridView11->Rows[i]->Height = floor((dataGridView11->Height - dataGridView11->ColumnHeadersHeight) / (N * 1.01));
      dataGridView11->Columns[i]->Width = floor((dataGridView11->Width - dataGridView11->RowHeadersWidth) / (N * 1.01));
      dataGridView12->Rows[i]->Height = floor((dataGridView12->Height - dataGridView12->ColumnHeadersHeight) / (N * 1.01));
      dataGridView12->Columns[i]->Width = floor((dataGridView12->Width - dataGridView12->RowHeadersWidth) / (N * 1.01));
      dataGridView5->Columns[i]->Width = floor((dataGridView5->Width - dataGridView5->RowHeadersWidth) / (N * 1.001));
    }
    for (int i = 0; i < N + 2; i++) {
      dataGridView5->Rows[i]->Height = floor((dataGridView5->Height - dataGridView5->ColumnHeadersHeight) / ((N + 2) * 1.001));
    }
  }


        void CountCycle() {
          vector<Zveno> link;
          vector<vector<Zveno>> chain;
          MakeCycle(link, M, 'm', N);
          MakeCycle(link, B, 'b', N);
          MakeCycle(link, C, 'c', N);
          MakeCycle(link, Mn, 'n', N);
          MakeCycle(link, Bn, 'd', N);
          MakeCycle(link, Cn, 's', N);
          FindCycle(link, chain);
          double* job1 = new double[link.size()];
          double* fulljob1 = new double[chain.size()];
          double* percent1 = new double[chain.size()];
          job1 = FindJob(link, Mn, Bn, Cn, freq, evec, K);
          fulljob1 = CycleJob(link, chain, job1);
          percent1 = JobPercent(chain, fulljob1);
          dataGridView6->ColumnCount = 3;
          dataGridView6->RowCount = chain.size() + 1;
          dataGridView6->Columns[0]->HeaderCell->Value = gcnew String("Циклы");
          dataGridView6->Columns[1]->HeaderCell->Value = gcnew String("Процент работы");
          dataGridView6->Columns[2]->HeaderCell->Value = gcnew String("Работа");
          dataGridView6->RowHeadersWidth = 50;
          dataGridView6->Columns[0]->Width = 130;
          dataGridView6->Columns[1]->Width = 70;
          dataGridView6->Columns[2]->Width = 70;
          vector<string> S1;
          for (int i = 0; i < chain.size(); i++) {
            string tmp;
            tmp += to_string(chain[i][0].GetF());
            for (int j = 0; j < chain[i].size(); j++) {
              if (chain[i][j].GetT() == 'n')
                tmp += "-*-*->";
              else if (chain[i][j].GetT() == 'd')
                tmp += "- - ->";
              else if (chain[i][j].GetT() == 's')
                tmp += "----->";
              else if (chain[i][j].GetT() == 'm')
                tmp += "-*-*-";
              else if (chain[i][j].GetT() == 'b')
                tmp += "- - -";
              else if (chain[i][j].GetT() == 'c')
                tmp += "-----";
              tmp += to_string(chain[i][j].GetS());
            }
            S1.push_back(tmp);
          }
          for (int i = 0; i < S1.size(); i++) {
            dataGridView6[2, i]->Value = fulljob1[i];
          }

          for (int i = 0; i < S1.size(); i++) {
            dataGridView6[0, i]->Value = gcnew String(S1[i].c_str());
          }
          for (int i = 0; i < S1.size(); i++) {
            string str = std::to_string(percent1[i]);
            str += " %";
            dataGridView6[1, i]->Value = gcnew String(str.c_str());
          }

          for (int i = 0; i < S1.size(); i++)
          {
            dataGridView6->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
          }
        }

  private: System::Void textBox1_TextChanged_2(System::Object^ sender, System::EventArgs^ e) {

  }
  public: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N * 3; j++) {
        UR[i][j] = Convert::ToDouble(dataGridView9[j, i]->Value);
      }
    }
    FillMatrix(UR, M, B, C, N);
    SegmentationMatrix(M, Mn, ' ', N);
    SegmentationMatrix(B, Bn, 'b', N);
    SegmentationMatrix(C, Cn, ' ', N);
    M_1C = MatrixMul(inversion(M, N), C, N);
    EigVec(M_1C, eigen, evec, freq, N);
    VecSort(eigen, evec, freq, N);
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        dataGridView2[j, i]->Value = M[i][j];
      }
    }
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        dataGridView1[j, i]->Value = B[i][j];
      }
    }
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        dataGridView3[j, i]->Value = C[i][j];
      }
    }
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        dataGridView10[j, i]->Value = Mn[i][j];
        cout << Mn[i][j];
      }
    }
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        dataGridView11[j, i]->Value = Bn[i][j];
        cout << Bn[i][j];
      }
    }
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        dataGridView12[j, i]->Value = Cn[i][j];
        cout << Cn[i][j];
      }
    }
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        dataGridView5[j, i + 2]->Value = evec[i][j];
      }
    }
    for (int i = 0; i < N; i++) {
      dataGridView5[i, 1]->Value = eigen[i];
    }
    for (int i = 0; i < N; i++) {
      dataGridView5[i, 0]->Value = freq[i];
    }
    CountCycle();
  }
  private: System::Void dataGridView9_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

  }
  private: System::Void dataGridView4_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
  }
  private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void label18_Click_1(System::Object^ sender, System::EventArgs^ e) {
  }

  private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void dataGridView10_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
  }
  private: System::Void dataGridView11_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
  }
  private: System::Void dataGridView12_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
  }
  private: System::Void dataGridView6_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
  }
  private: System::Void dataGridView3_CellContentClick_2(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
  }
  private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
    K = (int)numericUpDown1->Value - 1;
    string str = "ЦИКЛЫ НА ";
    str += to_string((int)numericUpDown1->Value);
    if ((int)numericUpDown1->Value == 3)
      str += "-EЙ ФОРМЕ КОЛЕБАНИЙ";
    else
      str += "-ОЙ ФОРМЕ КОЛЕБАНИЙ";
    label15->Text = gcnew String(str.c_str());
    if (numericUpDown1->Value > N)
      numericUpDown1->Value = N;
    if (numericUpDown1->Value == 0)
      numericUpDown1->Value = 1;
    CountCycle();
  }
  private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
  }
  };
}