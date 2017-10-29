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
	INTERFAZ<int>IO, IO2;
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
	private: System::Windows::Forms::Button^  Bordenar;
	protected:
	private: System::Windows::Forms::TextBox^  Tcopias;
	private: System::Windows::Forms::TextBox^  Tentrada;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  bcola;
	private: System::Windows::Forms::Button^  BTamano;
	private: System::Windows::Forms::DataGridView^  Grid3;
	private: System::Windows::Forms::DataGridView^  Grid2;
	private: System::Windows::Forms::DataGridView^  Grid1;
	private: System::Windows::Forms::Button^  Bmem;

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
			this->Bordenar = (gcnew System::Windows::Forms::Button());
			this->Tcopias = (gcnew System::Windows::Forms::TextBox());
			this->Tentrada = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->bcola = (gcnew System::Windows::Forms::Button());
			this->BTamano = (gcnew System::Windows::Forms::Button());
			this->Grid3 = (gcnew System::Windows::Forms::DataGridView());
			this->Grid2 = (gcnew System::Windows::Forms::DataGridView());
			this->Grid1 = (gcnew System::Windows::Forms::DataGridView());
			this->Bmem = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid1))->BeginInit();
			this->SuspendLayout();
			// 
			// Bordenar
			// 
			this->Bordenar->Location = System::Drawing::Point(16, 139);
			this->Bordenar->Name = L"Bordenar";
			this->Bordenar->Size = System::Drawing::Size(100, 23);
			this->Bordenar->TabIndex = 23;
			this->Bordenar->Text = L"Ordenar";
			this->Bordenar->UseVisualStyleBackColor = true;
			this->Bordenar->Click += gcnew System::EventHandler(this, &Form1::Bordenar_Click);
			// 
			// Tcopias
			// 
			this->Tcopias->Location = System::Drawing::Point(73, 226);
			this->Tcopias->Name = L"Tcopias";
			this->Tcopias->Size = System::Drawing::Size(43, 20);
			this->Tcopias->TabIndex = 22;
			this->Tcopias->Text = L"0";
			// 
			// Tentrada
			// 
			this->Tentrada->Location = System::Drawing::Point(16, 15);
			this->Tentrada->Name = L"Tentrada";
			this->Tentrada->Size = System::Drawing::Size(100, 20);
			this->Tentrada->TabIndex = 21;
			this->Tentrada->Text = L"0";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(16, 224);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(51, 23);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Rep";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(16, 197);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 23);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Ingreso Ordenado";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(16, 168);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 23);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Invertir";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// bcola
			// 
			this->bcola->Location = System::Drawing::Point(16, 110);
			this->bcola->Name = L"bcola";
			this->bcola->Size = System::Drawing::Size(100, 23);
			this->bcola->TabIndex = 17;
			this->bcola->Text = L"pila";
			this->bcola->UseVisualStyleBackColor = true;
			this->bcola->Click += gcnew System::EventHandler(this, &Form1::bcola_Click);
			// 
			// BTamano
			// 
			this->BTamano->Location = System::Drawing::Point(16, 52);
			this->BTamano->Name = L"BTamano";
			this->BTamano->Size = System::Drawing::Size(100, 23);
			this->BTamano->TabIndex = 16;
			this->BTamano->Text = L"Tamano";
			this->BTamano->UseVisualStyleBackColor = true;
			this->BTamano->Click += gcnew System::EventHandler(this, &Form1::BTamano_Click);
			// 
			// Grid3
			// 
			this->Grid3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Grid3->Location = System::Drawing::Point(396, 52);
			this->Grid3->Name = L"Grid3";
			this->Grid3->Size = System::Drawing::Size(100, 265);
			this->Grid3->TabIndex = 15;
			// 
			// Grid2
			// 
			this->Grid2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Grid2->Location = System::Drawing::Point(258, 52);
			this->Grid2->Name = L"Grid2";
			this->Grid2->Size = System::Drawing::Size(100, 265);
			this->Grid2->TabIndex = 14;
			// 
			// Grid1
			// 
			this->Grid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Grid1->Location = System::Drawing::Point(122, 52);
			this->Grid1->Name = L"Grid1";
			this->Grid1->Size = System::Drawing::Size(100, 265);
			this->Grid1->TabIndex = 13;
			// 
			// Bmem
			// 
			this->Bmem->Location = System::Drawing::Point(16, 81);
			this->Bmem->Name = L"Bmem";
			this->Bmem->Size = System::Drawing::Size(100, 23);
			this->Bmem->TabIndex = 12;
			this->Bmem->Text = L"mem";
			this->Bmem->UseVisualStyleBackColor = true;
			this->Bmem->Click += gcnew System::EventHandler(this, &Form1::Bmem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(528, 340);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BTamano_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		IO.Tam_Grid(Grid1, Tentrada);

	}
private: System::Void Bmem_Click(System::Object^  sender, System::EventArgs^  e) 
		{
	IO.Grid_Memoria(Grid1, Tentrada);
	IO.Memoria_Grilla(Grid1);
}
private: System::Void bcola_Click(System::Object^  sender, System::EventArgs^  e) 
		{
	APP.Memoria_PilaDim(IO.ThisM());
	IO2.ThisM(APP.PilaDim_Memoria());
	IO2.Memoria_Grilla(Grid2);
}
private: System::Void Bordenar_Click(System::Object^  sender, System::EventArgs^  e) 
		{
	APP.OrdenarPila();

	IO2.ThisM(APP.PilaDim_Memoria());
	IO2.Memoria_Grilla(Grid3);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
		{
	APP.Invertir();

	IO2.ThisM(APP.PilaDim_Memoria());
	IO2.Memoria_Grilla(Grid3);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
		{
	Nodo<int>node;
	node.Elemento(Convert::ToInt32(Tentrada->Text));
	APP2.IngresarOrdenadamente(node);
	IO2.ThisM(APP2.PilaDim_Memoria());
	IO2.Memoria_Grilla(Grid3);
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
		{
	APP.EliminarNrepetidos(Convert::ToInt32(Tcopias->Text));
	IO2.ThisM(APP.PilaDim_Memoria());
	IO2.Memoria_Grilla(Grid3);
	
}
};
}
