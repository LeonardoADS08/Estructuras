#pragma once
#include "INTERFAZ.h"
#include "APLICACION.h"
namespace Pilas_Forms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	INTERFAZ<int>IO, IO2;
	APLICACION<int> AP, ap2;
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

	protected:






	private: System::Windows::Forms::Button^  button1;



	private: System::Windows::Forms::DataGridView^  Grid2;
	private: System::Windows::Forms::DataGridView^  GridPila;

	private: System::Windows::Forms::TextBox^  Tentrada;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;










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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Grid2 = (gcnew System::Windows::Forms::DataGridView());
			this->GridPila = (gcnew System::Windows::Forms::DataGridView());
			this->Tentrada = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridPila))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(146, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(37, 23);
			this->button1->TabIndex = 36;
			this->button1->Text = L"CLR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Grid2
			// 
			this->Grid2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Grid2->Location = System::Drawing::Point(221, 12);
			this->Grid2->Name = L"Grid2";
			this->Grid2->Size = System::Drawing::Size(117, 180);
			this->Grid2->TabIndex = 31;
			// 
			// GridPila
			// 
			this->GridPila->AllowUserToAddRows = false;
			this->GridPila->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->GridPila->Location = System::Drawing::Point(374, 11);
			this->GridPila->Name = L"GridPila";
			this->GridPila->Size = System::Drawing::Size(117, 180);
			this->GridPila->TabIndex = 30;
			// 
			// Tentrada
			// 
			this->Tentrada->Location = System::Drawing::Point(20, 26);
			this->Tentrada->Name = L"Tentrada";
			this->Tentrada->Size = System::Drawing::Size(117, 20);
			this->Tentrada->TabIndex = 35;
			this->Tentrada->Text = L"0";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(20, 52);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 23);
			this->button2->TabIndex = 47;
			this->button2->Text = L"IngresarMemoria";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(20, 81);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(117, 23);
			this->button3->TabIndex = 48;
			this->button3->Text = L"Mostrar PIla";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(20, 139);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(117, 23);
			this->button4->TabIndex = 49;
			this->button4->Text = L"EliminarRepetidos";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(20, 110);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(117, 23);
			this->button5->TabIndex = 50;
			this->button5->Text = L"IngresarOrdenadamente";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(20, 168);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(117, 23);
			this->button6->TabIndex = 51;
			this->button6->Text = L"Invertir";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(20, 197);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(117, 23);
			this->button7->TabIndex = 52;
			this->button7->Text = L"Ordenar";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(531, 278);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Tentrada);
			this->Controls->Add(this->Grid2);
			this->Controls->Add(this->GridPila);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridPila))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IO.AgregarElemento(Tentrada);
	IO.Memoria_Grilla(Grid2);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	AP.Memoria_Pila(IO.ThisMem());
	AP.Pila_Memoria();
	IO2.ThisMem(AP.ThisMem());
	IO2.Memoria_Grilla(GridPila);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
{
	AP.Memoria_Pila_ordenadamente(IO.ThisMem());
	AP.Pila_Memoria();
	IO2.ThisMem(AP.ThisMem());
	IO2.Memoria_Grilla(GridPila);

}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	AP.Memoria_Pila(IO2.ThisMem());
	AP.EliminarDuplicados();
	AP.Pila_Memoria();
	IO2.ThisMem(AP.ThisMem());
	IO2.Memoria_Grilla(GridPila);
}

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
{
	AP.Memoria_Pila(IO2.ThisMem());
	AP.InvertirPila();
	AP.InvertirPila();
	AP.Pila_Memoria();
	IO2.ThisMem(AP.ThisMem());
	IO2.Memoria_Grilla(GridPila);
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
{
	AP.Memoria_Pila(IO2.ThisMem());
	AP.Pila_Ordenar();
	AP.Pila_Memoria();
	IO2.ThisMem(AP.ThisMem());
	IO2.Memoria_Grilla(GridPila);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IO.Clear(Grid2);
}
};
}
