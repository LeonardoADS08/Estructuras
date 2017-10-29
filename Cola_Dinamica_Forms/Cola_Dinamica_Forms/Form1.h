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
	Aplicacion<int>APP,APP2;
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
	private: System::Windows::Forms::Button^  Bmem;
	private: System::Windows::Forms::DataGridView^  Grid1;
	private: System::Windows::Forms::DataGridView^  Grid2;
	private: System::Windows::Forms::DataGridView^  Grid3;
	private: System::Windows::Forms::Button^  BTamano;
	protected:

	protected:

	protected:




	private: System::Windows::Forms::Button^  bcola;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TextBox^  Tentrada;
	private: System::Windows::Forms::TextBox^  Tcopias;
	private: System::Windows::Forms::Button^  Bordenar;


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
			this->Bmem = (gcnew System::Windows::Forms::Button());
			this->Grid1 = (gcnew System::Windows::Forms::DataGridView());
			this->Grid2 = (gcnew System::Windows::Forms::DataGridView());
			this->Grid3 = (gcnew System::Windows::Forms::DataGridView());
			this->BTamano = (gcnew System::Windows::Forms::Button());
			this->bcola = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->Tentrada = (gcnew System::Windows::Forms::TextBox());
			this->Tcopias = (gcnew System::Windows::Forms::TextBox());
			this->Bordenar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid3))->BeginInit();
			this->SuspendLayout();
			// 
			// Bmem
			// 
			this->Bmem->Location = System::Drawing::Point(12, 99);
			this->Bmem->Name = L"Bmem";
			this->Bmem->Size = System::Drawing::Size(100, 23);
			this->Bmem->TabIndex = 0;
			this->Bmem->Text = L"mem";
			this->Bmem->UseVisualStyleBackColor = true;
			this->Bmem->Click += gcnew System::EventHandler(this, &Form1::Bmem_Click);
			// 
			// Grid1
			// 
			this->Grid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Grid1->Location = System::Drawing::Point(118, 70);
			this->Grid1->Name = L"Grid1";
			this->Grid1->Size = System::Drawing::Size(100, 265);
			this->Grid1->TabIndex = 1;
			// 
			// Grid2
			// 
			this->Grid2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Grid2->Location = System::Drawing::Point(254, 70);
			this->Grid2->Name = L"Grid2";
			this->Grid2->Size = System::Drawing::Size(100, 265);
			this->Grid2->TabIndex = 2;
			// 
			// Grid3
			// 
			this->Grid3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Grid3->Location = System::Drawing::Point(392, 70);
			this->Grid3->Name = L"Grid3";
			this->Grid3->Size = System::Drawing::Size(100, 265);
			this->Grid3->TabIndex = 3;
			// 
			// BTamano
			// 
			this->BTamano->Location = System::Drawing::Point(12, 70);
			this->BTamano->Name = L"BTamano";
			this->BTamano->Size = System::Drawing::Size(100, 23);
			this->BTamano->TabIndex = 4;
			this->BTamano->Text = L"Tamano";
			this->BTamano->UseVisualStyleBackColor = true;
			this->BTamano->Click += gcnew System::EventHandler(this, &Form1::BTamano_Click);
			// 
			// bcola
			// 
			this->bcola->Location = System::Drawing::Point(12, 128);
			this->bcola->Name = L"bcola";
			this->bcola->Size = System::Drawing::Size(100, 23);
			this->bcola->TabIndex = 5;
			this->bcola->Text = L"cola";
			this->bcola->UseVisualStyleBackColor = true;
			this->bcola->Click += gcnew System::EventHandler(this, &Form1::bcola_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 186);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Invertir";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 215);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 23);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Ingreso Ordenado";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 242);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(51, 23);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Rep";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// Tentrada
			// 
			this->Tentrada->Location = System::Drawing::Point(12, 33);
			this->Tentrada->Name = L"Tentrada";
			this->Tentrada->Size = System::Drawing::Size(100, 20);
			this->Tentrada->TabIndex = 9;
			this->Tentrada->Text = L"0";
			// 
			// Tcopias
			// 
			this->Tcopias->Location = System::Drawing::Point(69, 244);
			this->Tcopias->Name = L"Tcopias";
			this->Tcopias->Size = System::Drawing::Size(43, 20);
			this->Tcopias->TabIndex = 10;
			this->Tcopias->Text = L"0";
			// 
			// Bordenar
			// 
			this->Bordenar->Location = System::Drawing::Point(12, 157);
			this->Bordenar->Name = L"Bordenar";
			this->Bordenar->Size = System::Drawing::Size(100, 23);
			this->Bordenar->TabIndex = 11;
			this->Bordenar->Text = L"Ordenar";
			this->Bordenar->UseVisualStyleBackColor = true;
			this->Bordenar->Click += gcnew System::EventHandler(this, &Form1::Bordenar_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(531, 362);
			this->Controls->Add(this->Bordenar);
			this->Controls->Add(this->Tcopias);
			this->Controls->Add(this->Tentrada);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->bcola);
			this->Controls->Add(this->BTamano);
			this->Controls->Add(this->Grid3);
			this->Controls->Add(this->Grid2);
			this->Controls->Add(this->Grid1);
			this->Controls->Add(this->Bmem);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Bmem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		IO.Grid_Memoria(Grid1, Tentrada);
	}
private: System::Void BTamano_Click(System::Object^  sender, System::EventArgs^  e) 
{
		IO.Tam_Grid(Grid1, Tentrada);

}
private: System::Void bcola_Click(System::Object^  sender, System::EventArgs^  e) 
{
	APP.Memoria_ColaDin(IO.ThisM());
	IO2.ThisM(APP.ColaDin_Memoria());
	IO2.Memoria_Grilla(Grid2);

}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	APP.Invertir();
	IO2.ThisM(APP.ColaDin_Memoria());
	IO2.Memoria_Grilla(Grid3);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
{
	Nodo<int> node;
	node.Elemento(Convert::ToInt32(Tentrada->Text));
	APP2.IngresarOrdenadamente(node);
	IO2.ThisM(APP2.ColaDin_Memoria());
	IO2.Memoria_Grilla(Grid3);
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
{
	APP.EliminarNrepetidos(Convert::ToInt32(Tcopias->Text));
	IO2.ThisM(APP.ColaDin_Memoria());
	IO2.Memoria_Grilla(Grid3);
}
private: System::Void Bordenar_Click(System::Object^  sender, System::EventArgs^  e) 
{
	APP.OrdenarCola();
	IO2.ThisM(APP.ColaDin_Memoria());
	IO2.Memoria_Grilla(Grid3);
}
};
}
