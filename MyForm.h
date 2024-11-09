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
			this->btnMultiplication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnMultiplication->Location = System::Drawing::Point(754, 50);
			this->btnMultiplication->Name = L"btnMultiplication";
			this->btnMultiplication->Size = System::Drawing::Size(153, 52);
			this->btnMultiplication->TabIndex = 24;
			this->btnMultiplication->Text = L"Multiply A and B";
			this->btnMultiplication->UseVisualStyleBackColor = true;
			this->btnMultiplication->Visible = false;
			this->btnMultiplication->Click += gcnew System::EventHandler(this, &MyForm::btnMultiplication_Click);
			// 
			// btnAddition
			// 
			this->btnAddition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnAddition->Location = System::Drawing::Point(754, 114);
			this->btnAddition->Name = L"btnAddition";
			this->btnAddition->Size = System::Drawing::Size(153, 48);
			this->btnAddition->TabIndex = 25;
			this->btnAddition->Text = L"Add A and B";
			this->btnAddition->UseVisualStyleBackColor = true;
			this->btnAddition->Visible = false;
			this->btnAddition->Click += gcnew System::EventHandler(this, &MyForm::btnAddition_Click);
			// 
			// btnSubtraction
			// 
			this->btnSubtraction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnSubtraction->Location = System::Drawing::Point(754, 178);
			this->btnSubtraction->Name = L"btnSubtraction";
			this->btnSubtraction->Size = System::Drawing::Size(153, 48);
			this->btnSubtraction->TabIndex = 26;
			this->btnSubtraction->Text = L"Subtract A and B";
			this->btnSubtraction->UseVisualStyleBackColor = true;
			this->btnSubtraction->Visible = false;
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
			this->MatrixResult->Visible = false;
			// 
			// btnCheck
			// 
			this->btnCheck->Location = System::Drawing::Point(222, 458);
			this->btnCheck->Name = L"btnCheck";
			this->btnCheck->Size = System::Drawing::Size(306, 47);
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1258, 534);
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
			int i = this->Matrix1->CurrentCell->ColumnIndex;
			this->Matrix1->Columns->Remove(this->Matrix1->Columns[i]);
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
			int i = this->Matrix2->CurrentCell->ColumnIndex;
			this->Matrix2->Columns->Remove(this->Matrix2->Columns[i]);
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

	bool check_grid(DataGridView^ g) { // check valid data in the DataGridView object
		int n;
		for (int i = 0; i < g->RowCount; i++)
			for (int j = 0; j < g->ColumnCount; j++)
				if (!Int32::TryParse(System::Convert::ToString(g->Rows[i]->Cells[j]->Value), n))
					return false;
		return true;
	}
	private: System::Void btnCheck_Click(System::Object^ sender, System::EventArgs^ e) { // check input data
		if (!check_grid(Matrix1)) { errorProvider1->SetError(Matrix1, "There are non-integers in the matrix!"); return; };
		if (!check_grid(Matrix2)) { errorProvider2->SetError(Matrix2, "There are non-integers in the matrix!"); return; };
		// if everything is correct, some operations will open
		btnMultiplication->Visible = true;
		btnAddition->Visible = true;
		btnSubtraction->Visible = true;
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
			MatrixResult->Visible = true;
			int iresult = this->Matrix1->RowCount, jresult = this->Matrix2->ColumnCount;
			create_result(iresult, jresult);
			for (int i = 0; i < iresult; i++)
				for (int j = 0; j < jresult; j++)
					for (int k = 0; k < this->Matrix1->ColumnCount; k++)
						MatrixResult->Rows[i]->Cells[j]->Value = Convert::ToInt32(MatrixResult->Rows[i]->Cells[j]->Value) +
						Convert::ToInt32(Matrix1->Rows[i]->Cells[k]->Value) * Convert::ToInt32(Matrix2->Rows[k]->Cells[j]->Value);
		}
	}

	// addition of 2 elements (2 matrices or 2 vectors)
	private: System::Void btnAddition_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Matrix1->RowCount != Matrix2->RowCount || Matrix1->ColumnCount != Matrix2->ColumnCount)
			errorProvider2->SetError(btnAddition, "The addition cannot be performed because the number of columns and rows of the two matrices do not match!");
		else {
			MatrixResult->Visible = true;
			create_result(Matrix1->RowCount, Matrix1->ColumnCount);
			for (int i = 0; i < Matrix1->RowCount; i++)
				for (int j = 0; j < Matrix1->ColumnCount; j++)
					MatrixResult->Rows[i]->Cells[j]->Value = Convert::ToInt32(Matrix1->Rows[i]->Cells[j]->Value) + Convert::ToInt32(Matrix2->Rows[i]->Cells[j]->Value);
		}
	}

	// subtraction of 2 elements (2 matrices or 2 vectors)
	private: System::Void btnSubtraction_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (Matrix1->RowCount != Matrix2->RowCount || Matrix1->ColumnCount != Matrix2->ColumnCount)
			errorProvider2->SetError(btnAddition, "The subtraction cannot be performed because the number of columns and rows of the two matrices do not match!");
		else {
			MatrixResult->Visible = true;
			create_result(Matrix1->RowCount, Matrix1->ColumnCount);
			for (int i = 0; i < Matrix1->RowCount; i++)
				for (int j = 0; j < Matrix1->ColumnCount; j++)
					MatrixResult->Rows[i]->Cells[j]->Value = Convert::ToInt32(Matrix1->Rows[i]->Cells[j]->Value) - Convert::ToInt32(Matrix2->Rows[i]->Cells[j]->Value);
		}
	}
};
}
