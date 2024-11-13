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
	private: System::Windows::Forms::TextBox^ txtRankB;
	private: System::Windows::Forms::TextBox^ txtRankA;
	private: System::Windows::Forms::Button^ btnRankB;
	private: System::Windows::Forms::Button^ btnRankA;



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
			this->btnRankA = (gcnew System::Windows::Forms::Button());
			this->btnRankB = (gcnew System::Windows::Forms::Button());
			this->txtRankA = (gcnew System::Windows::Forms::TextBox());
			this->txtRankB = (gcnew System::Windows::Forms::TextBox());
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
			this->btnCheck->BackColor = System::Drawing::Color::MintCream;
			this->btnCheck->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->btnCheck->Location = System::Drawing::Point(184, 481);
			this->btnCheck->Name = L"btnCheck";
			this->btnCheck->Size = System::Drawing::Size(400, 78);
			this->btnCheck->TabIndex = 28;
			this->btnCheck->Text = L"Check input data";
			this->btnCheck->UseVisualStyleBackColor = false;
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
			this->btnScProd->Enabled = false;
			this->btnScProd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnScProd->Location = System::Drawing::Point(754, 392);
			this->btnScProd->Name = L"btnScProd";
			this->btnScProd->Size = System::Drawing::Size(167, 48);
			this->btnScProd->TabIndex = 37;
			this->btnScProd->Text = L"Scalar Product A and B";
			this->btnScProd->UseVisualStyleBackColor = true;
			this->btnScProd->Click += gcnew System::EventHandler(this, &MyForm::btnScProd_Click);
			// 
			// btnVecProd
			// 
			this->btnVecProd->Enabled = false;
			this->btnVecProd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnVecProd->Location = System::Drawing::Point(754, 316);
			this->btnVecProd->Name = L"btnVecProd";
			this->btnVecProd->Size = System::Drawing::Size(153, 48);
			this->btnVecProd->TabIndex = 38;
			this->btnVecProd->Text = L"Vector Product A and B";
			this->btnVecProd->UseVisualStyleBackColor = true;
			this->btnVecProd->Click += gcnew System::EventHandler(this, &MyForm::btnVecProd_Click);
			// 
			// txtScProd
			// 
			this->txtScProd->Enabled = false;
			this->txtScProd->Location = System::Drawing::Point(927, 399);
			this->txtScProd->Name = L"txtScProd";
			this->txtScProd->ReadOnly = true;
			this->txtScProd->Size = System::Drawing::Size(302, 30);
			this->txtScProd->TabIndex = 39;
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
			this->btnDetA->Enabled = false;
			this->btnDetA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnDetA->Location = System::Drawing::Point(754, 455);
			this->btnDetA->Name = L"btnDetA";
			this->btnDetA->Size = System::Drawing::Size(167, 37);
			this->btnDetA->TabIndex = 41;
			this->btnDetA->Text = L"Determinant A";
			this->btnDetA->UseVisualStyleBackColor = true;
			this->btnDetA->Click += gcnew System::EventHandler(this, &MyForm::btnDetA_Click_1);
			// 
			// btnDetB
			// 
			this->btnDetB->Enabled = false;
			this->btnDetB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnDetB->Location = System::Drawing::Point(754, 498);
			this->btnDetB->Name = L"btnDetB";
			this->btnDetB->Size = System::Drawing::Size(167, 36);
			this->btnDetB->TabIndex = 42;
			this->btnDetB->Text = L"Determinant B";
			this->btnDetB->UseVisualStyleBackColor = true;
			this->btnDetB->Click += gcnew System::EventHandler(this, &MyForm::btnDetB_Click);
			// 
			// txtDetB
			// 
			this->txtDetB->Enabled = false;
			this->txtDetB->Location = System::Drawing::Point(927, 499);
			this->txtDetB->Name = L"txtDetB";
			this->txtDetB->ReadOnly = true;
			this->txtDetB->Size = System::Drawing::Size(302, 30);
			this->txtDetB->TabIndex = 43;
			// 
			// txtDetA
			// 
			this->txtDetA->Enabled = false;
			this->txtDetA->Location = System::Drawing::Point(927, 456);
			this->txtDetA->Name = L"txtDetA";
			this->txtDetA->ReadOnly = true;
			this->txtDetA->Size = System::Drawing::Size(302, 30);
			this->txtDetA->TabIndex = 44;
			// 
			// btnRankA
			// 
			this->btnRankA->Enabled = false;
			this->btnRankA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnRankA->Location = System::Drawing::Point(754, 540);
			this->btnRankA->Name = L"btnRankA";
			this->btnRankA->Size = System::Drawing::Size(167, 36);
			this->btnRankA->TabIndex = 45;
			this->btnRankA->Text = L"Rank A";
			this->btnRankA->UseVisualStyleBackColor = true;
			this->btnRankA->Click += gcnew System::EventHandler(this, &MyForm::btnRankA_Click);
			// 
			// btnRankB
			// 
			this->btnRankB->Enabled = false;
			this->btnRankB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnRankB->Location = System::Drawing::Point(754, 582);
			this->btnRankB->Name = L"btnRankB";
			this->btnRankB->Size = System::Drawing::Size(167, 36);
			this->btnRankB->TabIndex = 46;
			this->btnRankB->Text = L"Rank B";
			this->btnRankB->UseVisualStyleBackColor = true;
			this->btnRankB->Click += gcnew System::EventHandler(this, &MyForm::btnRankB_Click_1);
			// 
			// txtRankA
			// 
			this->txtRankA->Enabled = false;
			this->txtRankA->Location = System::Drawing::Point(927, 541);
			this->txtRankA->Name = L"txtRankA";
			this->txtRankA->ReadOnly = true;
			this->txtRankA->Size = System::Drawing::Size(302, 30);
			this->txtRankA->TabIndex = 47;
			// 
			// txtRankB
			// 
			this->txtRankB->Enabled = false;
			this->txtRankB->Location = System::Drawing::Point(927, 583);
			this->txtRankB->Name = L"txtRankB";
			this->txtRankB->ReadOnly = true;
			this->txtRankB->Size = System::Drawing::Size(302, 30);
			this->txtRankB->TabIndex = 48;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1258, 643);
			this->Controls->Add(this->txtRankB);
			this->Controls->Add(this->txtRankA);
			this->Controls->Add(this->btnRankB);
			this->Controls->Add(this->btnRankA);
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
		else if (Matrix1->RowCount == 9)
			errorProvider1->SetError(Matrix1, "Limit on the number of rows!");
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
		if (Matrix1->ColumnCount == 9)
			errorProvider1->SetError(Matrix1, "Limit on the number of columns!");
		else {
			errorProvider1->Clear();
			this->Matrix1->Columns->Add("", "");
		}
	}
	private: System::Void btnRemoveColumnMatrix1_Click(System::Object^ sender, System::EventArgs^ e) { // remove highlighted column to first matrix
		if (Matrix1->RowCount == 0)
			errorProvider1->SetError(Matrix1, "There are no columns in the matrix yet!");
		else {
			errorProvider1->Clear();
			int i = this->Matrix1->CurrentCell->ColumnIndex;
			this->Matrix1->Columns->Remove(this->Matrix1->Columns[i]);
		}
	}
	private: System::Void btnAddRowMatrix2_Click(System::Object^ sender, System::EventArgs^ e) { // add row to second matrix
		if (Matrix2->ColumnCount == 0)
			errorProvider2->SetError(Matrix2, "First, add at least one column!");
		else if (Matrix2->RowCount == 9)
			errorProvider2->SetError(Matrix2, "Limit on the number of rows!");
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
		if (Matrix2->ColumnCount == 9)
			errorProvider2->SetError(Matrix2, "Limit on the number of columns!");
		else {
			errorProvider2->Clear();
			this->Matrix2->Columns->Add("", "");
		}
	}
	private: System::Void btnRemoveColumnMatrix2_Click(System::Object^ sender, System::EventArgs^ e) { // remove highlighted column to second matrix
		if (Matrix2->RowCount == 0)
			errorProvider2->SetError(Matrix2, "There are no columns in the matrix yet!");
		else {
			errorProvider2->Clear();
			int i = this->Matrix2->CurrentCell->ColumnIndex;
			this->Matrix2->Columns->Remove(this->Matrix2->Columns[i]);
		}
	}

	// functions for the work with input data
	int check_grid(DataGridView^ g) { // check valid data in the DataGridView object
		int n;
		for (int i = 0; i < g->RowCount; i++)
			for (int j = 0; j < g->ColumnCount; j++) {
				if (!Int32::TryParse(System::Convert::ToString(g->Rows[i]->Cells[j]->Value), n))
					return 0;
				if (n > 1000 || n < -1000)
					return -1;
			}
		return 1;
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

	void block() {
		btnDetA->Enabled = false;
		txtDetA->Enabled = false;
		btnDetB->Enabled = false;
		txtDetB->Enabled = false;
		btnScProd->Enabled = false;
		txtScProd->Enabled = false;
		btnVecProd->Enabled = false;
		btnTransposeA->Enabled = false;
		btnTransposeB->Enabled = false;
		btnMultiplication->Enabled = false;
		btnAddition->Enabled = false;
		btnSubtraction->Enabled = false;
		btnIntMultiplicationA->Enabled = false;
		btnIntMultiplicationB->Enabled = false;
		txtMultiplierA->Enabled = false;
		txtMultiplierB->Enabled = false;
		btnRankA->Enabled = false;
		txtRankA->Enabled = false;
		btnRankB->Enabled = false;
		txtRankB->Enabled = false;

	}
	private: System::Void btnCheck_Click(System::Object^ sender, System::EventArgs^ e) { // check input data
		errorProvider1->Clear();
		errorProvider2->Clear();
		clear_matrix(MatrixResult);
		if (!check_grid(Matrix1)) errorProvider1->SetError(Matrix1, "There are non-integers in the matrix!");
		if (!check_grid(Matrix2)) errorProvider2->SetError(Matrix2, "There are non-integers in the matrix!");
		if (check_grid(Matrix1) == -1) errorProvider1->SetError(Matrix1, "There are too big or too small integers (> 1000 or < -1000) in the matrix!");
		if (check_grid(Matrix2) == -1) errorProvider2->SetError(Matrix2, "There are too big or too small integers (> 1000 or < -1000) in the matrix!");
		if (check_grid(Matrix1) == 1 && check_grid(Matrix2) == 1) {
			// if everything is correct, operations will be enable
			if (Matrix1->RowCount == 0 && Matrix2->RowCount > 0) { // if matrix1 is empty, operations with two matrices will be disable
				btnTransposeB->Enabled = true;
				btnIntMultiplicationB->Enabled = true;
				txtMultiplierB->Enabled = true;
				txtMultiplierB->Clear();
				txtDetB->Clear();
				txtRankB->Clear();
			}
			if (Matrix2->RowCount == 0 && Matrix1->RowCount > 0) { // if matrix2 is empty, operations with two matrices will be disable
				btnTransposeA->Enabled = true;
				btnIntMultiplicationA->Enabled = true;
				txtMultiplierA->Enabled = true;
				txtMultiplierA->Clear();
				txtDetA->Clear();
				txtRankA->Clear();
			}
			if (Matrix1->RowCount == 0 && Matrix2->RowCount == 0) { // if both matrices are empty
				errorProvider1->SetError(btnCheck, "Matrices are empty!");
				return;
			}
			if (Matrix1->RowCount > 0 && Matrix2->RowCount > 0) { // if both matrices is not empty
				btnMultiplication->Enabled = true;
				btnAddition->Enabled = true;
				btnSubtraction->Enabled = true;
				btnTransposeA->Enabled = true;
				btnIntMultiplicationA->Enabled = true;
				txtMultiplierA->Enabled = true;
				txtMultiplierA->Clear();
				txtDetA->Clear();
				txtRankA->Clear();
				btnTransposeB->Enabled = true;
				btnIntMultiplicationB->Enabled = true;
				txtMultiplierB->Enabled = true;
				txtMultiplierB->Clear();
				txtDetB->Clear();
				txtRankB->Clear();
			}
			if (vectors_mode() != -1) { // if matrix1 and matrix2 are both vectors
				btnScProd->Enabled = true;
				txtScProd->Enabled = true;
				btnVecProd->Enabled = true;
				txtScProd->Clear();
			}
			if (Matrix1->RowCount == Matrix1->ColumnCount && Matrix1->RowCount > 0 && Matrix1->ColumnCount > 0) { // if Matrix1 is square matrix
				btnDetA->Enabled = true;
				txtDetA->Enabled = true;
			}
			if (Matrix2->RowCount == Matrix2->ColumnCount && Matrix2->RowCount > 0 && Matrix2->ColumnCount > 0) { // if Matrix2 is square matrix
				btnDetB->Enabled = true;
				txtDetB->Enabled = true;
			}
			if (Matrix1->RowCount > 0 && Matrix1->ColumnCount > 0) { // if Matrix1 is not empty
				btnRankA->Enabled = true;
				txtRankA->Enabled = true;
			}
			if (Matrix2->RowCount > 0 && Matrix2->ColumnCount > 0) { // if Matrix2 is not empty
				btnRankB->Enabled = true;
				txtRankB->Enabled = true;
			}
		}
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
		block();
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
		block();
	}

	// subtraction of 2 elements (2 matrices or 2 vectors)
	private: System::Void btnSubtraction_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (Matrix1->RowCount != Matrix2->RowCount || Matrix1->ColumnCount != Matrix2->ColumnCount)
			errorProvider2->SetError(btnSubtraction, "The subtraction cannot be performed because the number of columns and rows of the two matrices do not match!");
		else {
			clear_matrix(MatrixResult);
			create_result(Matrix1->RowCount, Matrix1->ColumnCount);
			for (int i = 0; i < Matrix1->RowCount; i++)
				for (int j = 0; j < Matrix1->ColumnCount; j++)
					MatrixResult->Rows[i]->Cells[j]->Value = Convert::ToInt32(Matrix1->Rows[i]->Cells[j]->Value) - Convert::ToInt32(Matrix2->Rows[i]->Cells[j]->Value);
		}
		block();
	}

	// multiply matrix1 by some integer
	private: System::Void btnIntMultiplicationA_Click(System::Object^ sender, System::EventArgs^ e) {
		int mult;
		if (Int32::TryParse(txtMultiplierA->Text, mult)) {
			errorProvider1->Clear();
			clear_matrix(MatrixResult);
			create_result(Matrix1->RowCount, Matrix1->ColumnCount);
			for (int i = 0; i < Matrix1->RowCount; i++)
				for (int j = 0; j < Matrix1->ColumnCount; j++)
					MatrixResult->Rows[i]->Cells[j]->Value = Convert::ToInt32(Matrix1->Rows[i]->Cells[j]->Value) * mult;
			block();
		}
		else
			errorProvider1->SetError(btnIntMultiplicationA, "Incorrent input!");
	}

	// multiply matrix2 by some integer
	private: System::Void btnIntMultiplicationB_Click(System::Object^ sender, System::EventArgs^ e) {
		int mult;
		if (Int32::TryParse(txtMultiplierB->Text, mult)) {
			errorProvider2->Clear();
			clear_matrix(MatrixResult);
			create_result(Matrix2->RowCount, Matrix2->ColumnCount);
			for (int i = 0; i < Matrix2->RowCount; i++)
				for (int j = 0; j < Matrix2->ColumnCount; j++)
					MatrixResult->Rows[i]->Cells[j]->Value = Convert::ToInt32(Matrix2->Rows[i]->Cells[j]->Value) * mult;
			block();
		}
		else
			errorProvider2->SetError(btnIntMultiplicationA, "Incorrent input!");
	}

	// calculate scalar product of vectors (if matrix1 and matrix2 are vectors only)
	private: System::Void btnScProd_Click(System::Object^ sender, System::EventArgs^ e) {
		errorProvider1->Clear();
		errorProvider2->Clear();
		txtScProd->Clear();
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
			if (Matrix1->ColumnCount != Matrix2->RowCount) {
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
		block();
	}

	// calculate vector product of vectors (if matrix1 and matrix2 are vectors only)
	private: System::Void btnVecProd_Click(System::Object^ sender, System::EventArgs^ e) {
		int mode = vectors_mode();
		clear_matrix(MatrixResult);
		switch (mode) {
		case 0:
			if (Matrix1->ColumnCount != 3 || Matrix2->ColumnCount != 3) {
				errorProvider1->SetError(btnVecProd, "The vector product cannot be calculated because the dimensions of the vectors are not 3!");
				break;
			}
			else {
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
			errorProvider1->SetError(btnVecProd, "Vectors are not both vertical or horizontal!");
			break;
		}
		block();
	}

	void transpose_matrix(DataGridView^ g) { // transpose matrix g
		for (int i = 0; i < g->ColumnCount; i++)
			for (int j = 0; j < g->RowCount; j++)
				MatrixResult->Rows[i]->Cells[j]->Value = g->Rows[j]->Cells[i]->Value;
	}

	// transposing the matrix1
	private: System::Void btnTranspose1_Click(System::Object^ sender, System::EventArgs^ e) {
		clear_matrix(MatrixResult);
		create_result(Matrix1->ColumnCount, Matrix1->RowCount);
		transpose_matrix(Matrix1);
		block();
	}

	// transposing the matrix2
	private: System::Void btnTranspose2_Click(System::Object^ sender, System::EventArgs^ e) {
		clear_matrix(MatrixResult);
		create_result(Matrix2->ColumnCount, Matrix2->RowCount);
		transpose_matrix(Matrix2);
		block();
	}

	void getMatrixWithoutRowAndCol(int** matrix, int size, int row, int col, int** newMatrix) {
		int offsetRow = 0; // offset of the row index in the matrix
		int offsetCol = 0; // offset of the column index in the matrix
		for (int i = 0; i < size - 1; i++) {
			// skip row with index row
			if (i == row) {
				offsetRow = 1;
			}

			offsetCol = 0;
			for (int j = 0; j < size - 1; j++) {
				// skip column with index col
				if (j == col) {
					offsetCol = 1;
				}

				newMatrix[i][j] = matrix[i + offsetRow][j + offsetCol];
			}
		}
	}
	// recursive function for calculating the determinant of matrix
	int determinant(int **matrix, int size) {
		int det = 0;
		int degree = 1; // (-1)^(1+j) from determinant formula

		// exit from recursion
		if (size == 1) {
			return matrix[0][0];
		}
		// exit from recursion
		else if (size == 2) {
			return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
		}
		else {
			// matrix without row and column
			int** newMatrix = new int* [size - 1];
			for (int i = 0; i < size - 1; i++) {
				newMatrix[i] = new int[size - 1];
			}

			for (int j = 0; j < size; j++) {
				// delete 0 row and j column
				getMatrixWithoutRowAndCol(matrix, size, 0, j, newMatrix); // reduce the matrix until it becomes 2x2
				// from the determinant formula
				det = det + (degree * matrix[0][j] * determinant(newMatrix, size - 1));
				degree = -degree; 
			}
			for (int i = 0; i < size - 1; i++) {
				delete[] newMatrix[i];
			}
			delete[] newMatrix;
		}
		return det;
	}

	// calculate determinant of matrix1
	private: System::Void btnDetA_Click_1(System::Object^ sender, System::EventArgs^ e) {
		try {
			errorProvider1->Clear();
			txtDetA->Clear();
			// copy data in Matrix1 to array temp
			int** temp = new int* [Matrix1->RowCount];
			for (int i = 0; i < Matrix1->RowCount; i++)
				temp[i] = new int[Matrix1->RowCount];
			for (int i = 0; i < Matrix1->RowCount; i++)
				for (int j = 0; j < Matrix1->ColumnCount; j++)
					temp[i][j] = Convert::ToInt32(Matrix1->Rows[i]->Cells[j]->Value);
			txtDetA->Text = Convert::ToString(determinant(temp, Matrix1->RowCount));
			block();
		}
		catch (OverflowException^ e) {
			errorProvider1->SetError(btnDetA, "An overflow has occurred!");
		}
	}

	// calculate determinant of matrix2
	private: System::Void btnDetB_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			errorProvider2->Clear();
			txtDetB->Clear();
			// copy data in Matrix2 to array temp
			int** temp = new int* [Matrix2->RowCount];
			for (int i = 0; i < Matrix2->RowCount; i++)
				temp[i] = new int[Matrix2->RowCount];
			for (int i = 0; i < Matrix2->RowCount; i++)
				for (int j = 0; j < Matrix2->ColumnCount; j++)
					temp[i][j] = Convert::ToInt32(Matrix2->Rows[i]->Cells[j]->Value);
			txtDetB->Text = Convert::ToString(determinant(temp, Matrix2->RowCount));
			block();
		}
		catch (OverflowException^ e) {
			errorProvider2->SetError(btnDetB, "An overflow has occurred!");
		}
	}
		   
	// function for exchanging two rows of a matrix
	void swap(int** matrix, int row1, int row2,
		int col)
	{
		for (int i = 0; i < col; i++)
		{
			int temp = matrix[row1][i];
			matrix[row1][i] = matrix[row2][i];
			matrix[row2][i] = temp;
		}
	}

	// function for finding rank of matrix
	int rank(int** matrix, int crows, int ccols)
	{
		int rank = ccols;
		int matrix_rows = crows;
		for (int row = 0; row < rank; row++) {
			// diagonal element is not zero
			if (matrix[row][row]) {
				for (int col = 0; col < matrix_rows; col++) {
					if (col != row) {
						// make all elements of current column as 0 except matrix[row][row]
						double mult = (double)matrix[col][row] /
							matrix[row][row];
						if (!matrix[row][row]) { throw 0; break; }
						for (int i = 0; i < rank; i++)
							matrix[col][i] -= mult * matrix[row][i];
					}
				}
			}
			// diagonal element is already zero
			else {
				bool reduce = true;
				// find the non-zero element in current column 
				for (int i = row + 1; i < matrix_rows; i++) {
					// swap the row with non-zero element with current row
					if (matrix[i][row]) {
						swap(matrix, row, i, rank);
						reduce = false;
						break;
					}
				}
				// if there is not a single row with non-zero element in current column, then all values in this column are 0
				if (reduce) {
					// reduce number of columns
					rank--;
					// copy the last column
					for (int i = 0; i < matrix_rows; i++)
						matrix[i][row] = matrix[i][rank];
				}
				// process this row again
				row--;
			}
		}
		return rank;
	}

	// calculate rank of matrix1
	private: System::Void btnRankA_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			errorProvider1->Clear();
			txtRankA->Clear();
			// copy data in Matrix1 to array temp
			int** temp = new int* [Matrix1->ColumnCount];
			for (int i = 0; i < Matrix1->RowCount; i++)
				temp[i] = new int[Matrix1->ColumnCount];
			for (int i = 0; i < Matrix1->RowCount; i++)
				for (int j = 0; j < Matrix1->ColumnCount; j++)
					temp[i][j] = Convert::ToInt32(Matrix1->Rows[i]->Cells[j]->Value);
			txtRankA->Text = Convert::ToString(rank(temp, Matrix1->RowCount, Matrix1->ColumnCount));
			block();
		}
		catch (OverflowException^ e) {
			errorProvider1->SetError(btnRankA, "An overflow has occurred!");
		}
		catch (int) {
			errorProvider1->SetError(btnRankA, "Divide by zero has occurred!");
		}
	}

	// calculate rank of matrix2
	private: System::Void btnRankB_Click_1(System::Object^ sender, System::EventArgs^ e) {
		try {
			errorProvider2->Clear();
			txtRankB->Clear();
			// copy data in Matrix2 to array temp
			int** temp = new int* [Matrix2->ColumnCount];
			for (int i = 0; i < Matrix2->RowCount; i++)
				temp[i] = new int[Matrix2->ColumnCount];
			for (int i = 0; i < Matrix2->RowCount; i++)
				for (int j = 0; j < Matrix2->ColumnCount; j++)
					temp[i][j] = Convert::ToInt32(Matrix2->Rows[i]->Cells[j]->Value);
			txtRankB->Text = Convert::ToString(rank(temp, Matrix2->RowCount, Matrix2->ColumnCount));
			block();
		}
		catch (OverflowException^ e) {
			errorProvider1->SetError(btnRankB, "An overflow has occurred!");
		}
		catch (int) {
			errorProvider1->SetError(btnRankB, "Divide by zero has occurred!");
		}
	}
};
}