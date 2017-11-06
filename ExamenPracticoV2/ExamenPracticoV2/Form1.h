#pragma once
#include "INTERFAZ.h"
#include "Aplicacion.h"
namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	INTERFAZ<int> IO,IO2;
	Aplicacion<int>APP, APP2;
	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  TtamanoA;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::DataGridView^  Grid1;
	private: System::Windows::Forms::DataGridView^  Grid2;
	private: System::Windows::Forms::DataGridView^  Grid3;
	private: System::Windows::Forms::TextBox^  Tentrada;
	private: System::Windows::Forms::Button^  button1;

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TtamanoA = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->Grid1 = (gcnew System::Windows::Forms::DataGridView());
			this->Grid2 = (gcnew System::Windows::Forms::DataGridView());
			this->Grid3 = (gcnew System::Windows::Forms::DataGridView());
			this->Tentrada = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid3))->BeginInit();
			this->SuspendLayout();
			// 
			// TtamanoA
			// 
			this->TtamanoA->Location = System::Drawing::Point(30, 61);
			this->TtamanoA->Name = L"TtamanoA";
			this->TtamanoA->Size = System::Drawing::Size(75, 23);
			this->TtamanoA->TabIndex = 0;
			this->TtamanoA->Text = L"tamano A";
			this->TtamanoA->UseVisualStyleBackColor = true;
			this->TtamanoA->Click += gcnew System::EventHandler(this, &Form1::TtamanoA_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(30, 107);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(30, 201);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(30, 172);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// Grid1
			// 
			this->Grid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Grid1->Location = System::Drawing::Point(155, 12);
			this->Grid1->Name = L"Grid1";
			this->Grid1->Size = System::Drawing::Size(536, 72);
			this->Grid1->TabIndex = 4;
			// 
			// Grid2
			// 
			this->Grid2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Grid2->Location = System::Drawing::Point(155, 90);
			this->Grid2->Name = L"Grid2";
			this->Grid2->Size = System::Drawing::Size(536, 72);
			this->Grid2->TabIndex = 5;
			// 
			// Grid3
			// 
			this->Grid3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Grid3->Location = System::Drawing::Point(155, 172);
			this->Grid3->Name = L"Grid3";
			this->Grid3->Size = System::Drawing::Size(536, 72);
			this->Grid3->TabIndex = 6;
			// 
			// Tentrada
			// 
			this->Tentrada->Location = System::Drawing::Point(30, 26);
			this->Tentrada->Name = L"Tentrada";
			this->Tentrada->Size = System::Drawing::Size(100, 20);
			this->Tentrada->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(30, 136);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(769, 261);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Tentrada);
			this->Controls->Add(this->Grid3);
			this->Controls->Add(this->Grid2);
			this->Controls->Add(this->Grid1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->TtamanoA);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TtamanoA_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		IO.Tam_Grid(Grid1, Tentrada);

	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		{

	IO.Grid_Memoria(Grid1, Tentrada);
	
	APP.Memoria_ListaCircEst(IO.ThisM());

	
	IO2.ThisM(APP.ListaCircEst_Memoria());
	IO2.Memoria_Grilla(Grid2);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
		{
	IO.Grid_Memoria(Grid1, Tentrada);

	APP.Memoria_ListaCircDim(IO.ThisM());


	IO2.ThisM(APP.ListaCDin_Memoria());
	IO2.Memoria_Grilla(Grid2);

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	

	IO2.ThisM(APP.ListaCircEst_Memoria());
	IO2.Memoria_Grilla(Grid3);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		{
	

	IO2.ThisM(APP.ListaCDin_Memoria());
	IO2.Memoria_Grilla(Grid3);

}
};
}
