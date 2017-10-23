#pragma once
#include "Aplicacion.h"
#include "INTERFAZ.h"
namespace Lista_Dinamica_Forms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	Aplicacion<int> APP;
	INTERFAZ<int> IO,IO2;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Bmemoria;
	private: System::Windows::Forms::Button^  Blista;
	private: System::Windows::Forms::TextBox^  Tentrada1;
	private: System::Windows::Forms::DataGridView^  GridL1;
	private: System::Windows::Forms::DataGridView^  GridL2;
	protected:

	protected:




	private: System::Windows::Forms::Button^  Btam;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Bmemoria = (gcnew System::Windows::Forms::Button());
			this->Blista = (gcnew System::Windows::Forms::Button());
			this->Tentrada1 = (gcnew System::Windows::Forms::TextBox());
			this->GridL1 = (gcnew System::Windows::Forms::DataGridView());
			this->GridL2 = (gcnew System::Windows::Forms::DataGridView());
			this->Btam = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridL1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridL2))->BeginInit();
			this->SuspendLayout();
			// 
			// Bmemoria
			// 
			this->Bmemoria->Location = System::Drawing::Point(30, 54);
			this->Bmemoria->Name = L"Bmemoria";
			this->Bmemoria->Size = System::Drawing::Size(109, 23);
			this->Bmemoria->TabIndex = 0;
			this->Bmemoria->Text = L"InsertarMemoria";
			this->Bmemoria->UseVisualStyleBackColor = true;
			this->Bmemoria->Click += gcnew System::EventHandler(this, &MyForm::Bmemoria_Click);
			// 
			// Blista
			// 
			this->Blista->Location = System::Drawing::Point(30, 83);
			this->Blista->Name = L"Blista";
			this->Blista->Size = System::Drawing::Size(109, 23);
			this->Blista->TabIndex = 1;
			this->Blista->Text = L"Lista";
			this->Blista->UseVisualStyleBackColor = true;
			this->Blista->Click += gcnew System::EventHandler(this, &MyForm::Blista_Click);
			// 
			// Tentrada1
			// 
			this->Tentrada1->Location = System::Drawing::Point(94, 28);
			this->Tentrada1->Name = L"Tentrada1";
			this->Tentrada1->Size = System::Drawing::Size(45, 20);
			this->Tentrada1->TabIndex = 2;
			this->Tentrada1->Text = L"0";
			// 
			// GridL1
			// 
			this->GridL1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->GridL1->Location = System::Drawing::Point(145, 57);
			this->GridL1->Name = L"GridL1";
			this->GridL1->Size = System::Drawing::Size(519, 49);
			this->GridL1->TabIndex = 3;
			// 
			// GridL2
			// 
			this->GridL2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->GridL2->Location = System::Drawing::Point(145, 112);
			this->GridL2->Name = L"GridL2";
			this->GridL2->Size = System::Drawing::Size(519, 49);
			this->GridL2->TabIndex = 4;
			// 
			// Btam
			// 
			this->Btam->Location = System::Drawing::Point(30, 26);
			this->Btam->Name = L"Btam";
			this->Btam->Size = System::Drawing::Size(58, 23);
			this->Btam->TabIndex = 5;
			this->Btam->Text = L"Tamano";
			this->Btam->UseVisualStyleBackColor = true;
			this->Btam->Click += gcnew System::EventHandler(this, &MyForm::Btam_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(752, 262);
			this->Controls->Add(this->Btam);
			this->Controls->Add(this->GridL2);
			this->Controls->Add(this->GridL1);
			this->Controls->Add(this->Tentrada1);
			this->Controls->Add(this->Blista);
			this->Controls->Add(this->Bmemoria);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridL1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridL2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Bmemoria_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		IO.Grid_Memoria(GridL1, Tentrada1);

	}
private: System::Void Btam_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IO.Tam_Grid(GridL1,Tentrada1);
}
private: System::Void Blista_Click(System::Object^  sender, System::EventArgs^  e) 
{
	APP.Memoria_ListaDim(IO.ThisM());
	IO2.ThisM(APP.ListaDim_Memoria(APP.ThisL()));
	IO2.Memoria_Grilla(GridL2);

}
};
}
