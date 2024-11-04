#pragma once

namespace MatrixcalculatorLyuzhinas211 {

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
	private: System::Windows::Forms::Button^ btnCreateMatrix1;
	protected:

	private: System::Windows::Forms::Button^ btnCreateVector1;
	protected:



	private: System::Windows::Forms::Button^ btnAddVector1;

	private: System::Windows::Forms::Button^ btnRemoveVector1;
	private: System::Windows::Forms::DataGridView^ Vector1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ArrayNumbers;
	private: System::Windows::Forms::DataGridView^ Matrix1;
	private: System::Windows::Forms::Button^ btnAddColumnMatrix1;
	private: System::Windows::Forms::Button^ btnRemoveColumnMatrix1;
	private: System::Windows::Forms::Button^ btnAddRowMatrix1;
	private: System::Windows::Forms::Button^ btnRemoveRowMatrix1;
	private: System::Windows::Forms::Button^ btnAddRemoveMatrix2;
	private: System::Windows::Forms::Button^ btnAddRowMatrix2;
	private: System::Windows::Forms::Button^ btnRemoveColumnMatrix2;
	private: System::Windows::Forms::Button^ btnAddColumnMatrix2;
	private: System::Windows::Forms::DataGridView^ Matrix2;
	private: System::Windows::Forms::DataGridView^ Vector2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::Button^ btnRemoveVector2;
	private: System::Windows::Forms::Button^ btnAddVector2;
	private: System::Windows::Forms::Button^ btnCreateVector2;
	private: System::Windows::Forms::Button^ btnCreateMatrix2;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnCreateMatrix1 = (gcnew System::Windows::Forms::Button());
			this->btnCreateVector1 = (gcnew System::Windows::Forms::Button());
			this->btnAddVector1 = (gcnew System::Windows::Forms::Button());
			this->btnRemoveVector1 = (gcnew System::Windows::Forms::Button());
			this->Vector1 = (gcnew System::Windows::Forms::DataGridView());
			this->ArrayNumbers = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Matrix1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnAddColumnMatrix1 = (gcnew System::Windows::Forms::Button());
			this->btnRemoveColumnMatrix1 = (gcnew System::Windows::Forms::Button());
			this->btnAddRowMatrix1 = (gcnew System::Windows::Forms::Button());
			this->btnRemoveRowMatrix1 = (gcnew System::Windows::Forms::Button());
			this->btnAddRemoveMatrix2 = (gcnew System::Windows::Forms::Button());
			this->btnAddRowMatrix2 = (gcnew System::Windows::Forms::Button());
			this->btnRemoveColumnMatrix2 = (gcnew System::Windows::Forms::Button());
			this->btnAddColumnMatrix2 = (gcnew System::Windows::Forms::Button());
			this->Matrix2 = (gcnew System::Windows::Forms::DataGridView());
			this->Vector2 = (gcnew System::Windows::Forms::DataGridView());
			this->btnRemoveVector2 = (gcnew System::Windows::Forms::Button());
			this->btnAddVector2 = (gcnew System::Windows::Forms::Button());
			this->btnCreateVector2 = (gcnew System::Windows::Forms::Button());
			this->btnCreateMatrix2 = (gcnew System::Windows::Forms::Button());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Vector1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Vector2))->BeginInit();
			this->SuspendLayout();
			// 
			// btnCreateMatrix1
			// 
			this->btnCreateMatrix1->Location = System::Drawing::Point(208, 27);
			this->btnCreateMatrix1->Name = L"btnCreateMatrix1";
			this->btnCreateMatrix1->Size = System::Drawing::Size(132, 58);
			this->btnCreateMatrix1->TabIndex = 0;
			this->btnCreateMatrix1->Text = L"Создать матрицу";
			this->btnCreateMatrix1->UseVisualStyleBackColor = true;
			this->btnCreateMatrix1->Click += gcnew System::EventHandler(this, &MyForm::btnCreateMatrix1_Click);
			// 
			// btnCreateVector1
			// 
			this->btnCreateVector1->Location = System::Drawing::Point(38, 27);
			this->btnCreateVector1->Name = L"btnCreateVector1";
			this->btnCreateVector1->Size = System::Drawing::Size(132, 58);
			this->btnCreateVector1->TabIndex = 1;
			this->btnCreateVector1->Text = L"Создать вектор";
			this->btnCreateVector1->UseVisualStyleBackColor = true;
			this->btnCreateVector1->Click += gcnew System::EventHandler(this, &MyForm::btnCreateVector1_Click);
			// 
			// btnAddVector1
			// 
			this->btnAddVector1->Location = System::Drawing::Point(38, 392);
			this->btnAddVector1->Name = L"btnAddVector1";
			this->btnAddVector1->Size = System::Drawing::Size(148, 59);
			this->btnAddVector1->TabIndex = 3;
			this->btnAddVector1->Text = L"Добавить элемент";
			this->btnAddVector1->UseVisualStyleBackColor = true;
			this->btnAddVector1->Visible = false;
			// 
			// btnRemoveVector1
			// 
			this->btnRemoveVector1->Location = System::Drawing::Point(192, 392);
			this->btnRemoveVector1->Name = L"btnRemoveVector1";
			this->btnRemoveVector1->Size = System::Drawing::Size(148, 59);
			this->btnRemoveVector1->TabIndex = 4;
			this->btnRemoveVector1->Text = L"Удалить элемент";
			this->btnRemoveVector1->UseVisualStyleBackColor = true;
			this->btnRemoveVector1->Visible = false;
			// 
			// Vector1
			// 
			this->Vector1->AllowUserToAddRows = false;
			this->Vector1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->Vector1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Vector1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->ArrayNumbers });
			this->Vector1->Location = System::Drawing::Point(38, 92);
			this->Vector1->Margin = System::Windows::Forms::Padding(4);
			this->Vector1->Name = L"Vector1";
			this->Vector1->RowHeadersWidth = 62;
			this->Vector1->RowTemplate->Height = 28;
			this->Vector1->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->Vector1->Size = System::Drawing::Size(302, 293);
			this->Vector1->TabIndex = 5;
			this->Vector1->Visible = false;
			// 
			// ArrayNumbers
			// 
			this->ArrayNumbers->HeaderText = L"Вектор 1";
			this->ArrayNumbers->MinimumWidth = 8;
			this->ArrayNumbers->Name = L"ArrayNumbers";
			this->ArrayNumbers->Width = 150;
			// 
			// Matrix1
			// 
			this->Matrix1->AllowUserToAddRows = false;
			this->Matrix1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->Matrix1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Matrix1->Location = System::Drawing::Point(38, 92);
			this->Matrix1->Name = L"Matrix1";
			this->Matrix1->RowHeadersWidth = 62;
			this->Matrix1->RowTemplate->Height = 28;
			this->Matrix1->Size = System::Drawing::Size(302, 279);
			this->Matrix1->TabIndex = 6;
			this->Matrix1->Visible = false;
			// 
			// btnAddColumnMatrix1
			// 
			this->btnAddColumnMatrix1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnAddColumnMatrix1->Location = System::Drawing::Point(38, 377);
			this->btnAddColumnMatrix1->Name = L"btnAddColumnMatrix1";
			this->btnAddColumnMatrix1->Size = System::Drawing::Size(153, 49);
			this->btnAddColumnMatrix1->TabIndex = 10;
			this->btnAddColumnMatrix1->Text = L"Добавить столбец";
			this->btnAddColumnMatrix1->UseVisualStyleBackColor = true;
			this->btnAddColumnMatrix1->Visible = false;
			// 
			// btnRemoveColumnMatrix1
			// 
			this->btnRemoveColumnMatrix1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnRemoveColumnMatrix1->Location = System::Drawing::Point(199, 377);
			this->btnRemoveColumnMatrix1->Name = L"btnRemoveColumnMatrix1";
			this->btnRemoveColumnMatrix1->Size = System::Drawing::Size(141, 48);
			this->btnRemoveColumnMatrix1->TabIndex = 11;
			this->btnRemoveColumnMatrix1->Text = L"Удалить столбец";
			this->btnRemoveColumnMatrix1->UseVisualStyleBackColor = true;
			this->btnRemoveColumnMatrix1->Visible = false;
			// 
			// btnAddRowMatrix1
			// 
			this->btnAddRowMatrix1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnAddRowMatrix1->Location = System::Drawing::Point(38, 432);
			this->btnAddRowMatrix1->Name = L"btnAddRowMatrix1";
			this->btnAddRowMatrix1->Size = System::Drawing::Size(153, 51);
			this->btnAddRowMatrix1->TabIndex = 12;
			this->btnAddRowMatrix1->Text = L"Добавить строку";
			this->btnAddRowMatrix1->UseVisualStyleBackColor = true;
			this->btnAddRowMatrix1->Visible = false;
			// 
			// btnRemoveRowMatrix1
			// 
			this->btnRemoveRowMatrix1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnRemoveRowMatrix1->Location = System::Drawing::Point(199, 432);
			this->btnRemoveRowMatrix1->Name = L"btnRemoveRowMatrix1";
			this->btnRemoveRowMatrix1->Size = System::Drawing::Size(141, 51);
			this->btnRemoveRowMatrix1->TabIndex = 13;
			this->btnRemoveRowMatrix1->Text = L"Удалить строку";
			this->btnRemoveRowMatrix1->UseVisualStyleBackColor = true;
			this->btnRemoveRowMatrix1->Visible = false;
			// 
			// btnAddRemoveMatrix2
			// 
			this->btnAddRemoveMatrix2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnAddRemoveMatrix2->Location = System::Drawing::Point(592, 432);
			this->btnAddRemoveMatrix2->Name = L"btnAddRemoveMatrix2";
			this->btnAddRemoveMatrix2->Size = System::Drawing::Size(141, 51);
			this->btnAddRemoveMatrix2->TabIndex = 23;
			this->btnAddRemoveMatrix2->Text = L"Удалить строку";
			this->btnAddRemoveMatrix2->UseVisualStyleBackColor = true;
			this->btnAddRemoveMatrix2->Visible = false;
			// 
			// btnAddRowMatrix2
			// 
			this->btnAddRowMatrix2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnAddRowMatrix2->Location = System::Drawing::Point(431, 432);
			this->btnAddRowMatrix2->Name = L"btnAddRowMatrix2";
			this->btnAddRowMatrix2->Size = System::Drawing::Size(153, 51);
			this->btnAddRowMatrix2->TabIndex = 22;
			this->btnAddRowMatrix2->Text = L"Добавить строку";
			this->btnAddRowMatrix2->UseVisualStyleBackColor = true;
			this->btnAddRowMatrix2->Visible = false;
			// 
			// btnRemoveColumnMatrix2
			// 
			this->btnRemoveColumnMatrix2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnRemoveColumnMatrix2->Location = System::Drawing::Point(592, 377);
			this->btnRemoveColumnMatrix2->Name = L"btnRemoveColumnMatrix2";
			this->btnRemoveColumnMatrix2->Size = System::Drawing::Size(141, 48);
			this->btnRemoveColumnMatrix2->TabIndex = 21;
			this->btnRemoveColumnMatrix2->Text = L"Удалить столбец";
			this->btnRemoveColumnMatrix2->UseVisualStyleBackColor = true;
			this->btnRemoveColumnMatrix2->Visible = false;
			// 
			// btnAddColumnMatrix2
			// 
			this->btnAddColumnMatrix2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnAddColumnMatrix2->Location = System::Drawing::Point(431, 377);
			this->btnAddColumnMatrix2->Name = L"btnAddColumnMatrix2";
			this->btnAddColumnMatrix2->Size = System::Drawing::Size(153, 49);
			this->btnAddColumnMatrix2->TabIndex = 20;
			this->btnAddColumnMatrix2->Text = L"Добавить столбец";
			this->btnAddColumnMatrix2->UseVisualStyleBackColor = true;
			this->btnAddColumnMatrix2->Visible = false;
			// 
			// Matrix2
			// 
			this->Matrix2->AllowUserToAddRows = false;
			this->Matrix2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->Matrix2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Matrix2->Location = System::Drawing::Point(431, 92);
			this->Matrix2->Name = L"Matrix2";
			this->Matrix2->RowHeadersWidth = 62;
			this->Matrix2->RowTemplate->Height = 28;
			this->Matrix2->Size = System::Drawing::Size(302, 279);
			this->Matrix2->TabIndex = 19;
			this->Matrix2->Visible = false;
			// 
			// Vector2
			// 
			this->Vector2->AllowUserToAddRows = false;
			this->Vector2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->Vector2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Vector2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn1 });
			this->Vector2->Location = System::Drawing::Point(431, 92);
			this->Vector2->Margin = System::Windows::Forms::Padding(4);
			this->Vector2->Name = L"Vector2";
			this->Vector2->RowHeadersWidth = 62;
			this->Vector2->RowTemplate->Height = 28;
			this->Vector2->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->Vector2->Size = System::Drawing::Size(302, 293);
			this->Vector2->TabIndex = 18;
			this->Vector2->Visible = false;
			// 
			// btnRemoveVector2
			// 
			this->btnRemoveVector2->Location = System::Drawing::Point(585, 392);
			this->btnRemoveVector2->Name = L"btnRemoveVector2";
			this->btnRemoveVector2->Size = System::Drawing::Size(148, 59);
			this->btnRemoveVector2->TabIndex = 17;
			this->btnRemoveVector2->Text = L"Удалить элемент";
			this->btnRemoveVector2->UseVisualStyleBackColor = true;
			this->btnRemoveVector2->Visible = false;
			// 
			// btnAddVector2
			// 
			this->btnAddVector2->Location = System::Drawing::Point(431, 392);
			this->btnAddVector2->Name = L"btnAddVector2";
			this->btnAddVector2->Size = System::Drawing::Size(148, 59);
			this->btnAddVector2->TabIndex = 16;
			this->btnAddVector2->Text = L"Добавить элемент";
			this->btnAddVector2->UseVisualStyleBackColor = true;
			this->btnAddVector2->Visible = false;
			// 
			// btnCreateVector2
			// 
			this->btnCreateVector2->Location = System::Drawing::Point(431, 27);
			this->btnCreateVector2->Name = L"btnCreateVector2";
			this->btnCreateVector2->Size = System::Drawing::Size(132, 58);
			this->btnCreateVector2->TabIndex = 15;
			this->btnCreateVector2->Text = L"Создать вектор";
			this->btnCreateVector2->UseVisualStyleBackColor = true;
			// 
			// btnCreateMatrix2
			// 
			this->btnCreateMatrix2->Location = System::Drawing::Point(601, 27);
			this->btnCreateMatrix2->Name = L"btnCreateMatrix2";
			this->btnCreateMatrix2->Size = System::Drawing::Size(132, 58);
			this->btnCreateMatrix2->TabIndex = 14;
			this->btnCreateMatrix2->Text = L"Создать матрицу";
			this->btnCreateMatrix2->UseVisualStyleBackColor = true;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Вектор 2";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 150;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1222, 534);
			this->Controls->Add(this->btnAddRemoveMatrix2);
			this->Controls->Add(this->btnAddRowMatrix2);
			this->Controls->Add(this->btnRemoveColumnMatrix2);
			this->Controls->Add(this->btnAddColumnMatrix2);
			this->Controls->Add(this->Matrix2);
			this->Controls->Add(this->Vector2);
			this->Controls->Add(this->btnRemoveVector2);
			this->Controls->Add(this->btnAddVector2);
			this->Controls->Add(this->btnCreateVector2);
			this->Controls->Add(this->btnCreateMatrix2);
			this->Controls->Add(this->btnRemoveRowMatrix1);
			this->Controls->Add(this->btnAddRowMatrix1);
			this->Controls->Add(this->btnRemoveColumnMatrix1);
			this->Controls->Add(this->btnAddColumnMatrix1);
			this->Controls->Add(this->Matrix1);
			this->Controls->Add(this->Vector1);
			this->Controls->Add(this->btnRemoveVector1);
			this->Controls->Add(this->btnAddVector1);
			this->Controls->Add(this->btnCreateVector1);
			this->Controls->Add(this->btnCreateMatrix1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Матричный калькулятор";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Vector1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Vector2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnCreateVector1_Click(System::Object^ sender, System::EventArgs^ e) { // создание первого вектора
		// открываем всё для работы с вектором
		Vector1->Visible = true;
		btnRemoveVector1->Visible = true;
		btnAddVector1->Visible = true;
		// скрываем всё для работы с матрицей
		Matrix1->Visible = false;
		btnAddColumnMatrix1->Visible = false;
		btnAddRowMatrix1->Visible = false;
		btnRemoveColumnMatrix1->Visible = false;
		btnRemoveRowMatrix1->Visible = false;
	}
private: System::Void btnCreateMatrix1_Click(System::Object^ sender, System::EventArgs^ e) { // создание первой матрицы
	// скрываем всё для работы с вектором
	Vector1->Visible = false;
	btnRemoveVector1->Visible = false;
	btnAddVector1->Visible = false;
	// открываем всё для работы с матрицей
	Matrix1->Visible = true;
	btnAddColumnMatrix1->Visible = true;
	btnAddRowMatrix1->Visible = true;
	btnRemoveColumnMatrix1->Visible = true;
	btnRemoveRowMatrix1->Visible = true;
}


};
}
