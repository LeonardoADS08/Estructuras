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
	Aplicacion<string>APPS,APPS2;
	INTERFAZ<string>IOS,IOS2;
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
	private: System::Windows::Forms::Button^  Binvertir;
	private: System::Windows::Forms::Button^  Bordenar;
	private: System::Windows::Forms::Button^  BingOrdenado;
	private: System::Windows::Forms::DataGridView^  GridL3;
	private: System::Windows::Forms::Button^  BeliminarRep;
	private: System::Windows::Forms::TextBox^  Tcopias;
	private: System::Windows::Forms::Button^  Binsertar_mr;
	private: System::Windows::Forms::Button^  Mostar_mr;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  BclearMem;
	private: System::Windows::Forms::Button^  CLRList;

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
			this->Binvertir = (gcnew System::Windows::Forms::Button());
			this->Bordenar = (gcnew System::Windows::Forms::Button());
			this->BingOrdenado = (gcnew System::Windows::Forms::Button());
			this->GridL3 = (gcnew System::Windows::Forms::DataGridView());
			this->BeliminarRep = (gcnew System::Windows::Forms::Button());
			this->Tcopias = (gcnew System::Windows::Forms::TextBox());
			this->Binsertar_mr = (gcnew System::Windows::Forms::Button());
			this->Mostar_mr = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->BclearMem = (gcnew System::Windows::Forms::Button());
			this->CLRList = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridL1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridL2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridL3))->BeginInit();
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
			this->GridL1->Location = System::Drawing::Point(145, 54);
			this->GridL1->Name = L"GridL1";
			this->GridL1->Size = System::Drawing::Size(519, 49);
			this->GridL1->TabIndex = 3;
			// 
			// GridL2
			// 
			this->GridL2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->GridL2->Location = System::Drawing::Point(145, 109);
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
			// Binvertir
			// 
			this->Binvertir->Location = System::Drawing::Point(30, 113);
			this->Binvertir->Name = L"Binvertir";
			this->Binvertir->Size = System::Drawing::Size(109, 23);
			this->Binvertir->TabIndex = 6;
			this->Binvertir->Text = L"Invertir";
			this->Binvertir->UseVisualStyleBackColor = true;
			this->Binvertir->Click += gcnew System::EventHandler(this, &MyForm::Binvertir_Click);
			// 
			// Bordenar
			// 
			this->Bordenar->Location = System::Drawing::Point(30, 138);
			this->Bordenar->Name = L"Bordenar";
			this->Bordenar->Size = System::Drawing::Size(109, 23);
			this->Bordenar->TabIndex = 7;
			this->Bordenar->Text = L"Ordenar";
			this->Bordenar->UseVisualStyleBackColor = true;
			this->Bordenar->Click += gcnew System::EventHandler(this, &MyForm::Bordenar_Click);
			// 
			// BingOrdenado
			// 
			this->BingOrdenado->Location = System::Drawing::Point(30, 167);
			this->BingOrdenado->Name = L"BingOrdenado";
			this->BingOrdenado->Size = System::Drawing::Size(109, 23);
			this->BingOrdenado->TabIndex = 8;
			this->BingOrdenado->Text = L"Ingreso Ordenado";
			this->BingOrdenado->UseVisualStyleBackColor = true;
			this->BingOrdenado->Click += gcnew System::EventHandler(this, &MyForm::BingOrdenado_Click);
			// 
			// GridL3
			// 
			this->GridL3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->GridL3->Location = System::Drawing::Point(145, 164);
			this->GridL3->Name = L"GridL3";
			this->GridL3->Size = System::Drawing::Size(519, 49);
			this->GridL3->TabIndex = 9;
			// 
			// BeliminarRep
			// 
			this->BeliminarRep->Location = System::Drawing::Point(30, 196);
			this->BeliminarRep->Name = L"BeliminarRep";
			this->BeliminarRep->Size = System::Drawing::Size(75, 23);
			this->BeliminarRep->TabIndex = 10;
			this->BeliminarRep->Text = L"El.Rept";
			this->BeliminarRep->UseVisualStyleBackColor = true;
			this->BeliminarRep->Click += gcnew System::EventHandler(this, &MyForm::BeliminarRep_Click);
			// 
			// Tcopias
			// 
			this->Tcopias->Location = System::Drawing::Point(111, 199);
			this->Tcopias->Name = L"Tcopias";
			this->Tcopias->Size = System::Drawing::Size(28, 20);
			this->Tcopias->TabIndex = 11;
			this->Tcopias->Text = L"0";
			// 
			// Binsertar_mr
			// 
			this->Binsertar_mr->Location = System::Drawing::Point(325, 25);
			this->Binsertar_mr->Name = L"Binsertar_mr";
			this->Binsertar_mr->Size = System::Drawing::Size(109, 23);
			this->Binsertar_mr->TabIndex = 12;
			this->Binsertar_mr->Text = L"InsertarMemoria_str";
			this->Binsertar_mr->UseVisualStyleBackColor = true;
			this->Binsertar_mr->Click += gcnew System::EventHandler(this, &MyForm::Binsertar_mr_Click);
			// 
			// Mostar_mr
			// 
			this->Mostar_mr->Location = System::Drawing::Point(440, 26);
			this->Mostar_mr->Name = L"Mostar_mr";
			this->Mostar_mr->Size = System::Drawing::Size(109, 23);
			this->Mostar_mr->TabIndex = 13;
			this->Mostar_mr->Text = L"Lista String";
			this->Mostar_mr->UseVisualStyleBackColor = true;
			this->Mostar_mr->Click += gcnew System::EventHandler(this, &MyForm::Mostar_mr_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(555, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 23);
			this->button1->TabIndex = 14;
			this->button1->Text = L"EliminarSn";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// BclearMem
			// 
			this->BclearMem->Location = System::Drawing::Point(145, 25);
			this->BclearMem->Name = L"BclearMem";
			this->BclearMem->Size = System::Drawing::Size(84, 23);
			this->BclearMem->TabIndex = 15;
			this->BclearMem->Text = L"CLRM";
			this->BclearMem->UseVisualStyleBackColor = true;
			this->BclearMem->Click += gcnew System::EventHandler(this, &MyForm::BclearMem_Click);
			// 
			// CLRList
			// 
			this->CLRList->Location = System::Drawing::Point(235, 25);
			this->CLRList->Name = L"CLRList";
			this->CLRList->Size = System::Drawing::Size(84, 23);
			this->CLRList->TabIndex = 16;
			this->CLRList->Text = L"CLRList";
			this->CLRList->UseVisualStyleBackColor = true;
			this->CLRList->Click += gcnew System::EventHandler(this, &MyForm::CLRList_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(706, 242);
			this->Controls->Add(this->CLRList);
			this->Controls->Add(this->BclearMem);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Mostar_mr);
			this->Controls->Add(this->Binsertar_mr);
			this->Controls->Add(this->Tcopias);
			this->Controls->Add(this->BeliminarRep);
			this->Controls->Add(this->GridL3);
			this->Controls->Add(this->BingOrdenado);
			this->Controls->Add(this->Bordenar);
			this->Controls->Add(this->Binvertir);
			this->Controls->Add(this->Btam);
			this->Controls->Add(this->GridL2);
			this->Controls->Add(this->GridL1);
			this->Controls->Add(this->Tentrada1);
			this->Controls->Add(this->Blista);
			this->Controls->Add(this->Bmemoria);
			this->Name = L"MyForm";
			this->Opacity = 0.9;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridL1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridL2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridL3))->EndInit();
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
private: System::Void Binvertir_Click(System::Object^  sender, System::EventArgs^  e) 
{
	APP.Invertir();
	IO2.ThisM(APP.ListaDim_Memoria(APP.ThisL()));
	IO2.Memoria_Grilla(GridL3);
}
private: System::Void Bordenar_Click(System::Object^  sender, System::EventArgs^  e) 
{
	APP.Ordenar();
	IO2.ThisM(APP.ListaDim_Memoria(APP.ThisL()));
	IO2.Memoria_Grilla(GridL3);
}
private: System::Void BingOrdenado_Click(System::Object^  sender, System::EventArgs^  e) 
{
	Nodo<int> aux;
	aux.Elemento(Convert::ToInt32(Tentrada1->Text));
	APP.IngresarOrdenadamente(aux);
	IO2.ThisM(APP.ListaDim_Memoria(APP.ThisL()));
	IO2.Memoria_Grilla(GridL3);
}
private: System::Void BeliminarRep_Click(System::Object^  sender, System::EventArgs^  e) 
{
	APP.EliminarNrepetidos(Convert::ToInt32(Tcopias->Text));
	IO2.ThisM(APP.ListaDim_Memoria(APP.ThisL()));
	IO2.Memoria_Grilla(GridL3);
}

private: System::Void Binsertar_mr_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IOS.Grid_Memoria_Str(GridL1,Tentrada1);

}
private: System::Void Mostar_mr_Click(System::Object^  sender, System::EventArgs^  e) 
{
	APPS.Memoria_ListaDim(IOS.ThisM());
	IOS2.ThisM(APPS.ListaDim_Memoria(APPS.ThisL()));
	IOS2.Memoria_Str_Grid(GridL2);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{

	APPS2.ThisL(APPS.EliminarSn());

	IOS.ThisM(APPS.ListaDim_Memoria(APPS.ThisL()));
	IOS.Memoria_Str_Grid(GridL2);
	IOS2.ThisM(APPS2.ListaDim_Memoria(APPS2.ThisL()));
	IOS2.Memoria_Str_Grid(GridL3);
}
private: System::Void BclearMem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IO2.ClearMem();
}
private: System::Void CLRList_Click(System::Object^  sender, System::EventArgs^  e) 
{
	APP.ClearList();
}
};
}
