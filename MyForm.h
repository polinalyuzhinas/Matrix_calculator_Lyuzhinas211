#pragma once

namespace MatrixcalculatorLyuzhinas211 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	protected:








	private: System::Windows::Forms::DataGridView^ Matrix1;
	private: System::Windows::Forms::Button^ btnAddColumnMatrix1;
	private: System::Windows::Forms::Button^ btnRemoveColumnMatrix1;
	private: System::Windows::Forms::Button^ btnAddRowMatrix1;
	private: System::Windows::Forms::Button^ btnRemoveRowMatrix1;
	private: System::Windows::Forms::Button^ btnRemoveRowMatrix2;

	private: System::Windows::Forms::Button^ btnAddRowMatrix2;
	private: System::Windows::Forms::Button^ btnRemoveColumnMatrix2;
	private: System::Windows::Forms::Button^ btnAddColumnMatrix2;
	private: System::Windows::Forms::DataGridView^ Matrix2;






	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::ErrorProvider^ errorProvider2;
	private: System::Windows::Forms::Button^ btnSubtraction;




	private: System::Windows::Forms::Button^ btnAddition;


	private: System::Windows::Forms::Button^ btnMultiplication;
	private: System::Windows::Forms::DataGridView^ MatrixResult;
	private: System::Windows::Forms::Button^ btnCheck;
	private: System::Windows::Forms::Label^ lblMatrix2;
	private: System::Windows::Forms::Label^ lblMatrix1;
	private: System::Windows::Forms::Label^ lblResult;
	private: System::Windows::Forms::TextBox^ txtMultiplierB;
	private: System::Windows::Forms::Button^ btnIntMultiplicationB;
	private: System::Windows::Forms::TextBox^ txtMultiplierA;
	private: System::Windows::Forms::Button^ btnIntMultiplicationA;
	private: System::Windows::Forms::Button^ btnTransposeA;





	private: System::Windows::Forms::TextBox^ txtScProd;
	private: System::Windows::Forms::Button^ btnVecProd;

	private: System::Windows::Forms::Button^ btnScProd;
	private: System::Windows::Forms::Button^ btnTransposeB;

	private: System::Windows::Forms::TextBox^ txtDetA;
	private: System::Windows::Forms::TextBox^ txtDetB;
	private: System::Windows::Forms::Button^ btnDetB;
	private: System::Windows::Forms::Button^ btnDetA;



	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->Matrix1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnAddColumnMatrix1 = (gcnew System::Windows::Forms::Button());
			this->btnRemoveColumnMatrix1 = (gcnew System::Windows::Forms::Button());
			this->btnAddRowMatrix1 = (gcnew System::Windows::Forms::Button());
			this->btnRemoveRowMatrix1 = (gcnew System::Windows::Forms::Button());
			this->btnRemoveRowMatrix2 = (gcnew System::Windows::Forms::Button());
			this->btnAddRowMatrix2 = (gcnew System::Windows::Forms::Button());
			this->btnRemoveColumnMatrix2 = (gcnew System::Windows::Forms::Button());
			this->btnAddColumnMatrix2 = (gcnew System::Windows::Forms::Button());
			this->Matrix2 = (gcnew System::Windows::Forms::DataGridView());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->btnMultiplication = (gcnew System::Windows::Forms::Button());
			this->btnAddition = (gcnew System::Windows::Forms::Button());
			this->btnSubtraction = (gcnew System::Windows::Forms::Button());
			this->MatrixResult = (gcnew System::Windows::Forms::DataGridView());
			this->btnCheck = (gcnew System::Windows::Forms::Button());
			this->lblMatrix1 = (gcnew System::Windows::Forms::Label());
			this->lblMatrix2 = (gcnew System::Windows::Forms::Label());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->btnTransposeA = (gcnew System::Windows::Forms::Button());
			this->btnIntMultiplicationA = (gcnew System::Windows::Forms::Button());
			this->txtMultiplierA = (gcnew System::Windows::Forms::TextBox());
			this->txtMultiplierB = (gcnew System::Windows::Forms::TextBox());
			this->btnIntMultiplicationB = (gcnew System::Windows::Forms::Button());
			this->btnScProd = (gcnew System::Windows::Forms::Button());
			this->btnVecProd = (gcnew System::Windows::Forms::Button());
			this->txtScProd = (gcnew System::Windows::Forms::TextBox());
			this->btnTransposeB = (gcnew System::Windows::Forms::Button());
			this->btnDetA = (gcnew System::Windows::Forms::Button());
			this->btnDetB = (gcnew System::Windows::Forms::Button());
			this->txtDetB = (gcnew System::Windows::Forms::TextBox());
			this->txtDetA = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MatrixResult))->BeginInit();
			this->SuspendLayout();
			// 
			// Matrix1
			// 
			this->Matrix1->AllowUserToAddRows = false;
			this->Matrix1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->Matrix1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Matrix1->Location = System::Drawing::Point(25, 50);
			this->Matrix1->Name = L"Matrix1";
			this->Matrix1->RowHeadersWidth = 62;
			this->Matrix1->RowTemplate->Height = 28;
			this->Matrix1->Size = System::Drawing::Size(302, 279);
			this->Matrix1->TabIndex = 6;
			// 
			// btnAddColumnMatrix1
			// 
			this->btnAddColumnMatrix1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnAddColumnMatrix1->Location = System::Drawing::Point(25, 335);
			this->btnAddColumnMatrix1->Name = L"btnAddColumnMatrix1";
			this->btnAddColumnMatrix1->Size = System::Drawing::Size(153, 48);
			this->btnAddColumnMatrix1->TabIndex = 10;
			this->btnAddColumnMatrix1->Text = L"Add column";
			this->btnAddColumnMatrix1->UseVisualStyleBackColor = true;
			this->btnAddColumnMatrix1->Click += gcnew System::EventHandler(this, &MyForm::btnAddColumnMatrix1_Click);
			// 
			// btnRemoveColumnMatrix1
			// 
			this->btnRemoveColumnMatrix1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnRemoveColumnMatrix1->Location = System::Drawing::Point(184, 335);
			this->btnRemoveColumnMatrix1->Name = L"btnRemoveColumnMatrix1";
			this->btnRemoveColumnMatrix1->Size = System::Drawing::Size(141, 48);
			this->btnRemoveColumnMatrix1->TabIndex = 11;
			this->btnRemoveColumnMatrix1->Text = L"Remove column";
			this->btnRemoveColumnMatrix1->UseVisualStyleBackColor = true;
			this->btnRemoveColumnMatrix1->Click += gcnew System::EventHandler(this, &MyForm::btnRemoveColumnMatrix1_Click);
			// 
			// btnAddRowMatrix1
			// 
			this->btnAddRowMatrix1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnAddRowMatrix1->Location = System::Drawing::Point(25, 389);
			this->btnAddRowMatrix1->Name = L"btnAddRowMatrix1";
			this->btnAddRowMatrix1->Size = System::Drawing::Size(153, 51);
			this->btnAddRowMatrix1->TabIndex = 12;
			this->btnAddRowMatrix1->Text = L"Add row";
			this->btnAddRowMatrix1->UseVisualStyleBackColor = true;
			this->btnAddRowMatrix1->Click += gcnew System::EventHandler(this, &MyForm::btnAddRowMatrix1_Click);
			// 
			// btnRemoveRowMatrix1
			// 
			this->btnRemoveRowMatrix1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnRemoveRowMatrix1->Location = System::Drawing::Point(184, 389);
			this->btnRemoveRowMatrix1->Name = L"btnRemoveRowMatrix1";
			this->btnRemoveRowMatrix1->Size = System::Drawing::Size(141, 51);
			this->btnRemoveRowMatrix1->TabIndex = 13;
			this->btnRemoveRowMatrix1->Text = L"Remove row";
			this->btnRemoveRowMatrix1->UseVisualStyleBackColor = true;
			this->btnRemoveRowMatrix1->Click += gcnew System::EventHandler(this, &MyForm::btnRemoveRowMatrix1_Click);
			// 
			// btnRemoveRowMatrix2
			// 
			this->btnRemoveRowMatrix2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnRemoveRowMatrix2->Location = System::Drawing::Point(590, 389);
			this->btnRemoveRowMatrix2->Name = L"btnRemoveRowMatrix2";
			this->btnRemoveRowMatrix2->Size = System::Drawing::Size(141, 51);
			this->btnRemoveRowMatrix2->TabIndex = 23;
			this->btnRemoveRowMatrix2->Text = L"Remone row";
			this->btnRemoveRowMatrix2->UseVisualStyleBackColor = true;
			this->btnRemoveRowMatrix2->Click += gcnew System::EventHandler(this, &MyForm::btnRemoveRowMatrix2_Click);
			// 
			// btnAddRowMatrix2
			// 
			this->btnAddRowMatrix2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnAddRowMatrix2->Location = System::Drawing::Point(431, 389);
			this->btnAddRowMatrix2->Name = L"btnAddRowMatrix2";
			this->btnAddRowMatrix2->Size = System::Drawing::Size(153, 51);
			this->btnAddRowMatrix2->TabIndex = 22;
			this->btnAddRowMatrix2->Text = L"Add row";
			this->btnAddRowMatrix2->UseVisualStyleBackColor = true;
			this->btnAddRowMatrix2->Click += gcnew System::EventHandler(this, &MyForm::btnAddRowMatrix2_Click);
			// 
			// btnRemoveColumnMatrix2
			// 
			this->btnRemoveColumnMatrix2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnRemoveColumnMatrix2->Location = System::Drawing::Point(590, 335);
			this->btnRemoveColumnMatrix2->Name = L"btnRemoveColumnMatrix2";
			this->btnRemoveColumnMatrix2->Size = System::Drawing::Size(141, 48);
			this->btnRemoveColumnMatrix2->TabIndex = 21;
			this->btnRemoveColumnMatrix2->Text = L"Remove column";
			this->btnRemoveColumnMatrix2->UseVisualStyleBackColor = true;
			this->btnRemoveColumnMatrix2->Click += gcnew System::EventHandler(this, &MyForm::btnRemoveColumnMatrix2_Click);
			// 
			// btnAddColumnMatrix2
			// 
			this->btnAddColumnMatrix2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnAddColumnMatrix2->Location = System::Drawing::Point(431, 334);
			this->btnAddColumnMatrix2->Name = L"btnAddColumnMatrix2";
			this->btnAddColumnMatrix2->Size = System::Drawing::Size(153, 49);
			this->btnAddColumnMatrix2->TabIndex = 20;
			this->btnAddColumnMatrix2->Text = L"Add column";
			this->btnAddColumnMatrix2->UseVisualStyleBackColor = true;
			this->btnAddColumnMatrix2->Click += gcnew System::EventHandler(this, &MyForm::btnAddColumnMatrix2_Click);
			// 
			// Matrix2
			// 
			this->Matrix2->AllowUserToAddRows = false;
			this->Matrix2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->Matrix2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Matrix2->Location = System::Drawing::Point(429, 50);
			this->Matrix2->Name = L"Matrix2";
			this->Matrix2->RowHeadersWidth = 62;
			this->Matrix2->RowTemplate->Height = 28;
			this->Matrix2->Size = System::Drawing::Size(302, 279);
			this->Matrix2->TabIndex = 19;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// errorProvider2
			// 
			this->errorProvider2->ContainerControl = this;
			// 
			// btnMultiplication
			// 
			this->btnMultiplication->Enabled = false;
			this->btnMultiplication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnMultiplication->Location = System::Drawing::Point(754, 50);
			this->btnMultiplication->Name = L"btnMultiplication";
			this->btnMultiplication->Size = System::Drawing::Size(153, 52);
			this->btnMultiplication->TabIndex = 24;
			this->btnMultiplication->Text = L"Multiply A and B";
			this->btnMultiplication->UseVisualStyleBackColor = true;
			this->btnMultiplication->Click += gcnew System::EventHandler(this, &MyForm::btnMultiplication_Click);
			// 
			// btnAddition
			// 
			this->btnAddition->Enabled = false;
			this->btnAddition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnAddition->Location = System::Drawing::Point(754, 108);
			this->btnAddition->Name = L"btnAddition";
			this->btnAddition->Size = System::Drawing::Size(153, 48);
			this->btnAddition->TabIndex = 25;
			this->btnAddition->Text = L"Add A and B";
			this->btnAddition->UseVisualStyleBackColor = true;
			this->btnAddition->Click += gcnew System::EventHandler(this, &MyForm::btnAddition_Click);
			// 
			// btnSubtraction
			// 
			this->btnSubtraction->Enabled = false;
			this->btnSubtraction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnSubtraction->Location = System::Drawing::Point(754, 162);
			this->btnSubtraction->Name = L"btnSubtraction";
			this->btnSubtraction->Size = System::Drawing::Size(153, 48);
			this->btnSubtraction->TabIndex = 26;
			this->btnSubtraction->Text = L"Subtract A and B";
			this->btnSubtraction->UseVisualStyleBackColor = true;
			this->btnSubtraction->Click += gcnew System::EventHandler(this, &MyForm::btnSubtraction_Click_1);
			// 
			// MatrixResult
			// 
			this->MatrixResult->AllowUserToAddRows = false;
			this->MatrixResult->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->MatrixResult->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->MatrixResult->Location = System::Drawing::Point(927, 50);
			this->MatrixResult->Name = L"MatrixResult";
			this->MatrixResult->RowHeadersWidth = 62;
			this->MatrixResult->RowTemplate->Height = 28;
			this->MatrixResult->Size = System::Drawing::Size(302, 279);
			this->MatrixResult->TabIndex = 27;
			// 
			// btnCheck
			// 
			this->btnCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->btnCheck->Location = System::Drawing::Point(184, 457);
			this->btnCheck->Name = L"btnCheck";
			this->btnCheck->Size = System::Drawing::Size(400, 62);
			this->btnCheck->TabIndex = 28;
			this->btnCheck->Text = L"Check input data";
			this->btnCheck->UseVisualStyleBackColor = true;
			this->btnCheck->Click += gcnew System::EventHandler(this, &MyForm::btnCheck_Click);
			// 
			// lblMatrix1
			// 
			this->lblMatrix1->AutoSize = true;
			this->lblMatrix1->Location = System::Drawing::Point(131, 22);
			this->lblMatrix1->Name = L"lblMatrix1";
			this->lblMatrix1->Size = System::Drawing::Size(84, 25);
			this->lblMatrix1->TabIndex = 29;
			this->lblMatrix1->Text = L"Matrix A";
			this->lblMatrix1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblMatrix2
			// 
			this->lblMatrix2->AutoSize = true;
			this->lblMatrix2->Location = System::Drawing::Point(544, 22);
			this->lblMatrix2->Name = L"lblMatrix2";
			this->lblMatrix2->Size = System::Drawing::Size(83, 25);
			this->lblMatrix2->TabIndex = 30;
			this->lblMatrix2->Text = L"Matrix B";
			this->lblMatrix2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Location = System::Drawing::Point(1045, 22);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(66, 25);
			this->lblResult->TabIndex = 31;
			this->lblResult->Text = L"Result";
			this->lblResult->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnTransposeA
			// 
			this->btnTransposeA->Enabled = false;
			this->btnTransposeA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnTransposeA->Location = System::Drawing::Point(927, 334);
			this->btnTransposeA->Name = L"btnTransposeA";
			this->btnTransposeA->Size = System::Drawing::Size(141, 48);
			this->btnTransposeA->TabIndex = 32;
			this->btnTransposeA->Text = L"Transposе A";
			this->btnTransposeA->UseVisualStyleBackColor = true;
			this->btnTransposeA->Click += gcnew System::EventHandler(this, &MyForm::btnTranspose1_Click);
			// 
			// btnIntMultiplicationA
			// 
			this->btnIntMultiplicationA->Enabled = false;
			this->btnIntMultiplicationA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnIntMultiplicationA->Location = System::Drawing::Point(754, 216);
			this->btnIntMultiplicationA->Name = L"btnIntMultiplicationA";
			this->btnIntMultiplicationA->Size = System::Drawing::Size(153, 44);
			this->btnIntMultiplicationA->TabIndex = 33;
			this->btnIntMultiplicationA->Text = L"Multiply A by";
			this->btnIntMultiplicationA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnIntMultiplicationA->UseVisualStyleBackColor = true;
			this->btnIntMultiplicationA->Click += gcnew System::EventHandler(this, &MyForm::btnIntMultiplicationA_Click);
			// 
			// txtMultiplierA
			// 
			this->txtMultiplierA->Enabled = false;
			this->txtMultiplierA->Location = System::Drawing::Point(857, 223);
			this->txtMultiplierA->Name = L"txtMultiplierA";
			this->txtMultiplierA->Size = System::Drawing::Size(40, 30);
			this->txtMultiplierA->TabIndex = 34;
			// 
			// txtMultiplierB
			// 
			this->txtMultiplierB->Enabled = false;
			this->txtMultiplierB->Location = System::Drawing::Point(857, 273);
			this->txtMultiplierB->Name = L"txtMultiplierB";
			this->txtMultiplierB->Size = System::Drawing::Size(40, 30);
			this->txtMultiplierB->TabIndex = 36;
			// 
			// btnIntMultiplicationB
			// 
			this->btnIntMultiplicationB->Enabled = false;
			this->btnIntMultiplicationB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnIntMultiplicationB->Location = System::Drawing::Point(754, 266);
			this->btnIntMultiplicationB->Name = L"btnIntMultiplicationB";
			this->btnIntMultiplicationB->Size = System::Drawing::Size(153, 44);
			this->btnIntMultiplicationB->TabIndex = 35;
			this->btnIntMultiplicationB->Text = L"Multiply B by";
			this->btnIntMultiplicationB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnIntMultiplicationB->UseVisualStyleBackColor = true;
			this->btnIntMultiplicationB->Click += gcnew System::EventHandler(this, &MyForm::btnIntMultiplicationB_Click);
			// 
			// btnScProd
			// 
			this->btnScProd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnScProd->Location = System::Drawing::Point(754, 389);
			this->btnScProd->Name = L"btnScProd";
			this->btnScProd->Size = System::Drawing::Size(167, 48);
			this->btnScProd->TabIndex = 37;
			this->btnScProd->Text = L"Scalar Product A and B";
			this->btnScProd->UseVisualStyleBackColor = true;
			this->btnScProd->Visible = false;
			this->btnScProd->Click += gcnew System::EventHandler(this, &MyForm::btnScProd_Click);
			// 
			// btnVecProd
			// 
			this->btnVecProd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnVecProd->Location = System::Drawing::Point(754, 316);
			this->btnVecProd->Name = L"btnVecProd";
			this->btnVecProd->Size = System::Drawing::Size(153, 48);
			this->btnVecProd->TabIndex = 38;
			this->btnVecProd->Text = L"Vector Product A and B";
			this->btnVecProd->UseVisualStyleBackColor = true;
			this->btnVecProd->Visible = false;
			this->btnVecProd->Click += gcnew System::EventHandler(this, &MyForm::btnVecProd_Click);
			// 
			// txtScProd
			// 
			this->txtScProd->Location = System::Drawing::Point(927, 396);
			this->txtScProd->Name = L"txtScProd";
			this->txtScProd->ReadOnly = true;
			this->txtScProd->Size = System::Drawing::Size(302, 30);
			this->txtScProd->TabIndex = 39;
			this->txtScProd->Visible = false;
			// 
			// btnTransposeB
			// 
			this->btnTransposeB->Enabled = false;
			this->btnTransposeB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnTransposeB->Location = System::Drawing::Point(1089, 334);
			this->btnTransposeB->Name = L"btnTransposeB";
			this->btnTransposeB->Size = System::Drawing::Size(140, 48);
			this->btnTransposeB->TabIndex = 40;
			this->btnTransposeB->Text = L"Transposе B";
			this->btnTransposeB->UseVisualStyleBackColor = true;
			this->btnTransposeB->Click += gcnew System::EventHandler(this, &MyForm::btnTranspose2_Click);
			// 
			// btnDetA
			// 
			this->btnDetA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnDetA->Location = System::Drawing::Point(754, 393);
			this->btnDetA->Name = L"btnDetA";
			this->btnDetA->Size = System::Drawing::Size(167, 37);
			this->btnDetA->TabIndex = 41;
			this->btnDetA->Text = L"Determinant A";
			this->btnDetA->UseVisualStyleBackColor = true;
			this->btnDetA->Visible = false;
			// 
			// btnDetB
			// 
			this->btnDetB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnDetB->Location = System::Drawing::Point(754, 443);
			this->btnDetB->Name = L"btnDetB";
			this->btnDetB->Size = System::Drawing::Size(167, 36);
			this->btnDetB->TabIndex = 42;
			this->btnDetB->Text = L"Determinant B";
			this->btnDetB->UseVisualStyleBackColor = true;
			this->btnDetB->Visible = false;
			// 
			// txtDetB
			// 
			this->txtDetB->Location = System::Drawing::Point(927, 447);
			this->txtDetB->Name = L"txtDetB";
			this->txtDetB->ReadOnly = true;
			this->txtDetB->Size = System::Drawing::Size(302, 30);
			this->txtDetB->TabIndex = 43;
			this->txtDetB->Visible = false;
			// 
			// txtDetA
			// 
			this->txtDetA->Location = System::Drawing::Point(927, 400);
			this->txtDetA->Name = L"txtDetA";
			this->txtDetA->ReadOnly = true;
			this->txtDetA->Size = System::Drawing::Size(302, 30);
			this->txtDetA->TabIndex = 44;
			this->txtDetA->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1258, 543);
			this->Controls->Add(this->txtDetA);
			this->Controls->Add(this->txtDetB);
			this->Controls->Add(this->btnDetB);
			this->Controls->Add(this->btnDetA);
			this->Controls->Add(this->btnTransposeB);
			this->Controls->Add(this->txtScProd);
			this->Controls->Add(this->btnVecProd);
			this->Controls->Add(this->btnScProd);
			this->Controls->Add(this->txtMultiplierB);
			this->Controls->Add(this->btnIntMultiplicationB);
			this->Controls->Add(this->txtMultiplierA);
			this->Controls->Add(this->btnIntMultiplicationA);
			this->Controls->Add(this->btnTransposeA);
			this->Controls->Add(this->lblResult);
			this->Controls->Add(this->lblMatrix2);
			this->Controls->Add(this->lblMatrix1);
			this->Controls->Add(this->btnCheck);
			this->Controls->Add(this->MatrixResult);
			this->Controls->Add(this->btnSubtraction);
			this->Controls->Add(this->btnAddition);
			this->Controls->Add(this->btnMultiplication);
			this->Controls->Add(this->btnRemoveRowMatrix2);
			this->Controls->Add(this->btnAddRowMatrix2);
			this->Controls->Add(this->btnRemoveColumnMatrix2);
			this->Controls->Add(this->btnAddColumnMatrix2);
			this->Controls->Add(this->Matrix2);
			this->Controls->Add(this->btnRemoveRowMatrix1);
			this->Controls->Add(this->btnAddRowMatrix1);
			this->Controls->Add(this->btnRemoveColumnMatrix1);
			this->Controls->Add(this->btnAddColumnMatrix1);
			this->Controls->Add(this->Matrix1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Matrix Calculator";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MatrixResult))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//add/remove columns and rows to matrices
	private: System::Void btnAddRowMatrix1_Click(System::Object^ sender, System::EventArgs^ e) { // add row to first matrix
		if (Matrix1->ColumnCount == 0)
			errorProvider1->SetError(Matrix1, "First, add at least one column!");
		else {
			errorProvider1->Clear();
			this->Matrix1->Rows->Add(1);
		}
	}
	private: System::Void btnRemoveRowMatrix1_Click(System::Object^ sender, System::EventArgs^ e) { // remove highlighted row to first matrix
		if (Matrix1->RowCount == 0)
			errorProvider1->SetError(Matrix1, "There are no rows in the matrix yet!");
		else {
			errorProvider1->Clear();
			if (!this->Matrix1->CurrentRow->IsNewRow) {
				int i = this->Matrix1->CurrentRow->Index;
				this->Matrix1->Rows->Remove(this->Matrix1->Rows[i]);
			}
		}
	}
	private: System::Void btnAddColumnMatrix1_Click(System::Object^ sender, System::EventArgs^ e) { // add column to first matrix
		errorProvider1->Clear();
		this->Matrix1->Columns->Add("", "");
	}
	private: System::Void btnRemoveColumnMatrix1_Click(System::Object^ sender, System::EventArgs^ e) { // remove highlighted column to first matrix
		if (Matrix1->RowCount == 0)
			errorProvider1->SetError(Matrix1, "There are no rows in the matrix yet!");
		else {
			errorProvider1->Clear();
			int i = this->Matrix1->CurrentCell->ColumnIndex;
			this->Matrix1->Columns->Remove(this->Matrix1->Columns[i]);
		}
	}
	private: System::Void btnAddRowMatrix2_Click(System::Object^ sender, System::EventArgs^ e) { // add row to second matrix
		if (Matrix2->ColumnCount == 0)
			errorProvider2->SetError(Matrix2, "First, add at least one column!");
		else {
			errorProvider2->Clear();
			this->Matrix2->Rows->Add(1);
		}
	}
	private: System::Void btnRemoveRowMatrix2_Click(System::Object^ sender, System::EventArgs^ e) { // remove highlighted row to second matrix
		if (Matrix2->RowCount == 0)
			errorProvider2->SetError(Matrix2, "There are no rows in the matrix yet!");
		else {
			errorProvider2->Clear();
			if (!this->Matrix2->CurrentRow->IsNewRow) {
				int i = this->Matrix2->CurrentRow->Index;
				this->Matrix2->Rows->Remove(this->Matrix2->Rows[i]);
			}
		}
	}
	private: System::Void btnAddColumnMatrix2_Click(System::Object^ sender, System::EventArgs^ e) { // add column to second matrix
		errorProvider2->Clear();
		this->Matrix2->Columns->Add("", "");
	}
	private: System::Void btnRemoveColumnMatrix2_Click(System::Object^ sender, System::EventArgs^ e) { // remove highlighted column to second matrix
		if (Matrix2->RowCount == 0)
			errorProvider2->SetError(Matrix2, "There are no rows in the matrix yet!");
		else {
			errorProvider2->Clear();
			int i = this->Matrix2->CurrentCell->ColumnIndex;
			this->Matrix2->Columns->Remove(this->Matrix2->Columns[i]);
		}
	}

	// functions for the work with input data
	bool check_grid(DataGridView^ g) { // check valid data in the DataGridView object
		int n;
		for (int i = 0; i < g->RowCount; i++)
			for (int j = 0; j < g->ColumnCount; j++)
				if (!Int32::TryParse(System::Convert::ToString(g->Rows[i]->Cells[j]->Value), n))
					return false;
		return true;
	}

	void clear_matrix(DataGridView^ g) {
		g->Rows->Clear();
		g->Columns->Clear();
	}

	int vectors_mode() { // define the vector viewing mode
		/*
		0 - both vectors are horizontal
		1 - 1st vector - horizontal, 2nd - vertical
		2 - 1st vector - vertical, 2nd - horizontal
		3 - both vectors are vertical
		-1 - matrix1 and matrix2 aren't both vectors
		*/
		if (Matrix1->RowCount == 1 && Matrix1->ColumnCount > 1 && Matrix2->RowCount == 1 && Matrix2->ColumnCount > 1)
			return 0;
		if (Matrix1->RowCount == 1 && Matrix1->ColumnCount > 1 && Matrix2->RowCount > 1 && Matrix2->ColumnCount == 1)
			return 1;
		if (Matrix1->RowCount > 1 && Matrix1->ColumnCount == 1 && Matrix2->RowCount == 1 && Matrix2->ColumnCount > 1)
			return 2;
		if (Matrix1->RowCount > 1 && Matrix1->ColumnCount == 1 && Matrix2->RowCount > 1 && Matrix2->ColumnCount == 1)
			return 3;
		return -1;
	}

	void clear() {
		btnTransposeA->Enabled = false;
		btnTransposeB->Enabled = false;
		btnMultiplication->Enabled = false;
		btnAddition->Enabled = false;
		btnSubtraction->Enabled = false;
		btnIntMultiplicationA->Enabled = false;
		btnIntMultiplicationB->Enabled = false;
		txtMultiplierA->Enabled = false;
		txtMultiplierB->Enabled = false;
		btnDetA->Visible = false;
		txtDetA->Visible = false;
		btnDetB->Visible = false;
		txtDetB->Visible = false;
		btnScProd->Visible = false;
		txtScProd->Visible = false;
		btnVecProd->Visible = false;

	}
	private: System::Void btnCheck_Click(System::Object^ sender, System::EventArgs^ e) { // check input data
		errorProvider1->Clear();
		errorProvider2->Clear();
		if (!check_grid(Matrix1)) { errorProvider1->SetError(Matrix1, "There are non-integers in the matrix!"); return; };
		if (!check_grid(Matrix2)) { errorProvider2->SetError(Matrix2, "There are non-integers in the matrix!"); return; };
		// if everything is correct, basic operations will enable and special operations will open
		if (vectors_mode() != -1) { // if matrix1 and matrix2 are both vectors
			btnScProd->Visible = true;
			txtScProd->Visible = true;
			btnVecProd->Visible = true;
		}
		if (Matrix1->RowCount == Matrix1->ColumnCount) { // if Matrix1 is square matrix
			btnDetA->Visible = true;
			txtDetA->Visible = true;
		}
		if (Matrix2->RowCount == Matrix2->ColumnCount) { // if Matrix2 is square matrix
			btnDetB->Visible = true;
			txtDetB->Visible = true;
		}
		btnTransposeA->Enabled = true;
		btnTransposeB->Enabled = true;
		btnMultiplication->Enabled = true;
		btnAddition->Enabled = true;
		btnSubtraction->Enabled = true;
		btnIntMultiplicationA->Enabled = true;
		btnIntMultiplicationB->Enabled = true;
		txtMultiplierA->Enabled = true;
		txtMultiplierB->Enabled = true;
	}

	void create_result(int rows, int cols) { // create result matrix/vector (default zero matrix/vector)
		for (int j = 0; j < cols; j++) // columns
			this->MatrixResult->Columns->Add("", "");
		for (int i = 0; i < rows; i++) // rows
			this->MatrixResult->Rows->Add(0, 0);
	}

	// multiplication of 2 elements (2 matrices or vector and matrix)
	private: System::Void btnMultiplication_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->Matrix1->ColumnCount != this->Matrix2->RowCount)
			errorProvider2->SetError(btnMultiplication, "Matrices cannot be multiplied!");
		else {
			clear_matrix(MatrixResult);
			int iresult = this->Matrix1->RowCount, jresult = this->Matrix2->ColumnCount;
			create_result(iresult, jresult);
			for (int i = 0; i < iresult; i++)
				for (int j = 0; j < jresult; j++)
					for (int k = 0; k < this->Matrix1->ColumnCount; k++)
						MatrixResult->Rows[i]->Cells[j]->Value = Convert::ToInt32(MatrixResult->Rows[i]->Cells[j]->Value) +
		
						Convert::ToInt32(Matrix1->Rows[i]->Cells[k]->Value) * Convert::ToInt32(Matrix2->Rows[k]->Cells[j]->Value);
		}
		clear();
	}

	// addition of 2 elements (2 matrices or 2 vectors)
	private: System::Void btnAddition_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Matrix1->RowCount != Matrix2->RowCount || Matrix1->ColumnCount != Matrix2->ColumnCount)
			errorProvider2->SetError(btnAddition, "The addition cannot be performed because the number of columns and rows of the two matrices do not match!");
		else {
			clear_matrix(MatrixResult);
			create_result(Matrix1->RowCount, Matrix1->ColumnCount);
			for (int i = 0; i < Matrix1->RowCount; i++)
				for (int j = 0; j < Matrix1->ColumnCount; j++)
					MatrixResult->Rows[i]->Cells[j]->Value = Convert::ToInt32(Matrix1->Rows[i]->Cells[j]->Value) + Convert::ToInt32(Matrix2->Rows[i]->Cells[j]->Value);
		}
		clear();
	}

	// subtraction of 2 elements (2 matrices or 2 vectors)
	private: System::Void btnSubtraction_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (Matrix1->RowCount != Matrix2->RowCount || Matrix1->ColumnCount != Matrix2->ColumnCount)
			errorProvider2->SetError(btnAddition, "The subtraction cannot be performed because the number of columns and rows of the two matrices do not match!");
		else {
			clear_matrix(MatrixResult);
			create_result(Matrix1->RowCount, Matrix1->ColumnCount);
			for (int i = 0; i < Matrix1->RowCount; i++)
				for (int j = 0; j < Matrix1->ColumnCount; j++)
					MatrixResult->Rows[i]->Cells[j]->Value = Convert::ToInt32(Matrix1->Rows[i]->Cells[j]->Value) - Convert::ToInt32(Matrix2->Rows[i]->Cells[j]->Value);
		}
		clear();
	}

	// multiply matrix1 by some integer
	private: System::Void btnIntMultiplicationA_Click(System::Object^ sender, System::EventArgs^ e) {
		int mult;
		if (Int32::TryParse(txtMultiplierA->Text, mult)) {
			clear_matrix(MatrixResult);
			create_result(Matrix1->RowCount, Matrix1->ColumnCount);
			for (int i = 0; i < Matrix1->RowCount; i++)
				for (int j = 0; j < Matrix1->RowCount; j++)
					MatrixResult->Rows[i]->Cells[j]->Value = Convert::ToInt32(Matrix1->Rows[i]->Cells[j]->Value) * mult;
		}
		else
			errorProvider2->SetError(btnIntMultiplicationA, "Incorrent input!");
		clear();
	}

	// multiply matrix2 by some integer
	private: System::Void btnIntMultiplicationB_Click(System::Object^ sender, System::EventArgs^ e) {
		int mult;
		if (Int32::TryParse(txtMultiplierB->Text, mult)) {
			clear_matrix(MatrixResult);
			create_result(Matrix2->RowCount, Matrix2->ColumnCount);
			for (int i = 0; i < Matrix2->RowCount; i++)
				for (int j = 0; j < Matrix2->RowCount; j++)
					MatrixResult->Rows[i]->Cells[j]->Value = Convert::ToInt32(Matrix2->Rows[i]->Cells[j]->Value) * mult;
		}
		else
			errorProvider2->SetError(btnIntMultiplicationA, "Incorrent input!");
		clear();
	}

	// calculate scalar product of vectors (if matrix1 and matrix2 are vectors only)
	private: System::Void btnScProd_Click(System::Object^ sender, System::EventArgs^ e) {
		int mode = vectors_mode(), sc_prod = 0;
		switch (mode) {
		case 0:
			if (Matrix1->ColumnCount != Matrix2->ColumnCount) {
				errorProvider1->SetError(btnScProd, "The scalar product cannot be calculated because the dimensions of the vectors are not equal!");
				break;
			}
			else {
				for (int i = 0; i < Matrix1->ColumnCount; i++)
					sc_prod += Convert::ToInt32(Matrix1->Rows[0]->Cells[i]->Value) * Convert::ToInt32(Matrix2->Rows[0]->Cells[i]->Value);
				break;
			}
		case 1:
			if (Matrix1->ColumnCount - 1 != Matrix2->RowCount) {
				errorProvider1->SetError(btnScProd, "The scalar product cannot be calculated because the dimensions of the vectors are not equal!");
				break;
			}
			else {
				for (int i = 0; i < Matrix1->ColumnCount; i++)
					sc_prod += Convert::ToInt32(Matrix1->Rows[0]->Cells[i]->Value) * Convert::ToInt32(Matrix2->Rows[i]->Cells[0]->Value);
				break;
			}
		case 2:
			if (Matrix1->RowCount != Matrix2->ColumnCount) {
				errorProvider1->SetError(btnScProd, "The scalar product cannot be calculated because the dimensions of the vectors are not equal!");
				break;
			}
			else {
				for (int i = 0; i < Matrix1->RowCount; i++)
					sc_prod += Convert::ToInt32(Matrix1->Rows[i]->Cells[0]->Value) * Convert::ToInt32(Matrix2->Rows[0]->Cells[i]->Value);
				break;
			}
		case 3:
			if (Matrix1->RowCount != Matrix2->RowCount) {
				errorProvider1->SetError(btnScProd, "The scalar product cannot be calculated because the dimensions of the vectors are not equal!");
				break;
			}
			else {
				for (int i = 0; i < Matrix1->RowCount; i++)
					sc_prod += Convert::ToInt32(Matrix1->Rows[i]->Cells[0]->Value) * Convert::ToInt32(Matrix2->Rows[i]->Cells[0]->Value);
				break;
			}
		default:
			errorProvider1->SetError(btnScProd, "Mode is undefined!");
			break;
		}
		txtScProd->Text = Convert::ToString(sc_prod);
	}

	// calculate vector product of vectors (if matrix1 and matrix2 are vectors only)
	private: System::Void btnVecProd_Click(System::Object^ sender, System::EventArgs^ e) {
		int mode = vectors_mode();
		switch (mode) {
		case 0:
			if (Matrix1->ColumnCount != 3 || Matrix2->ColumnCount != 3) {
				errorProvider1->SetError(btnVecProd, "The vector product cannot be calculated because the dimensions of the vectors are not 3!");
				break;
			}
			else {
				MatrixResult->Visible = true;
				lblResult->Visible = true;
				create_result(1, 3);
				MatrixResult->Rows[0]->Cells[0]->Value = Convert::ToInt32(Matrix1->Rows[0]->Cells[1]->Value) * Convert::ToInt32(Matrix2->Rows[0]->Cells[2]->Value) -
					Convert::ToInt32(Matrix1->Rows[0]->Cells[2]->Value) * Convert::ToInt32(Matrix2->Rows[0]->Cells[1]->Value);
				MatrixResult->Rows[0]->Cells[1]->Value = Convert::ToInt32(Matrix1->Rows[0]->Cells[2]->Value) * Convert::ToInt32(Matrix2->Rows[0]->Cells[0]->Value) -
					Convert::ToInt32(Matrix1->Rows[0]->Cells[0]->Value) * Convert::ToInt32(Matrix2->Rows[0]->Cells[2]->Value);
				MatrixResult->Rows[0]->Cells[2]->Value = Convert::ToInt32(Matrix1->Rows[0]->Cells[0]->Value) * Convert::ToInt32(Matrix2->Rows[0]->Cells[1]->Value) -
					Convert::ToInt32(Matrix1->Rows[0]->Cells[1]->Value) * Convert::ToInt32(Matrix2->Rows[0]->Cells[0]->Value);
				break;
			}
		case 3:
			if (Matrix1->RowCount != 3 || Matrix2->RowCount != 3) {
				errorProvider1->SetError(btnVecProd, "The vector product cannot be calculated because the dimensions of the vectors are not 3!");
				break;
			}
			else {
				MatrixResult->Visible = true;
				lblResult->Visible = true;
				create_result(3, 1);
				MatrixResult->Rows[0]->Cells[0]->Value = Convert::ToInt32(Matrix1->Rows[1]->Cells[0]->Value) * Convert::ToInt32(Matrix2->Rows[2]->Cells[0]->Value) -
					Convert::ToInt32(Matrix1->Rows[2]->Cells[0]->Value) * Convert::ToInt32(Matrix2->Rows[1]->Cells[0]->Value);
				MatrixResult->Rows[1]->Cells[0]->Value = Convert::ToInt32(Matrix1->Rows[2]->Cells[0]->Value) * Convert::ToInt32(Matrix2->Rows[0]->Cells[0]->Value) -
					Convert::ToInt32(Matrix1->Rows[0]->Cells[0]->Value) * Convert::ToInt32(Matrix2->Rows[2]->Cells[0]->Value);
				MatrixResult->Rows[2]->Cells[0]->Value = Convert::ToInt32(Matrix1->Rows[0]->Cells[0]->Value) * Convert::ToInt32(Matrix2->Rows[1]->Cells[0]->Value) -
					Convert::ToInt32(Matrix1->Rows[1]->Cells[0]->Value) * Convert::ToInt32(Matrix2->Rows[0]->Cells[0]->Value);
				break;
			}
		default:
			errorProvider1->SetError(btnScProd, "Vectors are not both vertical or horizontal!");
			break;
		}
	}

		   void transpose_matrix(DataGridView^ g) { // transpose matrix g
			   for (int i = 0; i < g->ColumnCount; i++)
				   for (int j = 0; j < g->RowCount; j++)
					   MatrixResult->Rows[i]->Cells[j]->Value = g->Rows[j]->Cells[i]->Value;
		   }


	// transposing the matrix1
	private: System::Void btnTranspose1_Click(System::Object^ sender, System::EventArgs^ e) {
		MatrixResult->Visible = true;
		MatrixResult->Visible = true;
		create_result(Matrix1->ColumnCount, Matrix1->RowCount);
		transpose_matrix(Matrix1);
	}

	// transposing the matrix2
	private: System::Void btnTranspose2_Click(System::Object^ sender, System::EventArgs^ e) {
		MatrixResult->Visible = true;
		MatrixResult->Visible = true;
		create_result(Matrix2->ColumnCount, Matrix2->RowCount);
		transpose_matrix(Matrix2);
	}

	/*
	int determinant(DataGridView^ g, int size) { //Gauss elimination for calculating determinant
		int** temp = new int* [size];
		int det = 1, tmp;
		for (int i = 0; i < size; i++)
			temp[i] = new int[size];

		// copying matrix g to temp array
		for (int i = 0; i < size; i++)
			for (int j = 0; j < size; j++)
				temp[i][j] = Convert::ToInt32(g->Rows[i]->Cells[j]->Value);

		for (int k = 0; k < size - 1; k++) {
			for (int i = k + 1; i < size; i++) {
				tmp = -temp[i][k] / temp[k][k];
				for (int j = 0; j < size; j++) {
					temp[i][j] += temp[k][j] * tmp;
				}
			}
		}

		for (int i = 0; i < size; i++) {
			det *= temp[i][i];
		}
		return det;
	}
	*/

	// calculate determinant of the matrix1
	//private: System::Void btnDetA_Click(System::Object^ sender, System::EventArgs^ e); 
		// { txtDetA->Text = Convert::ToString(determinant(Matrix1, Matrix1->RowCount));
	//}

	// calculate determinant of the matrix2
	//private: System::Void btnDetB_Click(System::Object^ sender, System::EventArgs^ e);
		//{ txtDetB->Text = Convert::ToString(determinant(Matrix2, Matrix2->RowCount));
	//}
	

};
}