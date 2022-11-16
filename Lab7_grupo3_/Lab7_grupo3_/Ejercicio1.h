#pragma once
#include <string>
#include "List.h"

namespace Lab7grupo3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Ejercicio1
	/// </summary>
	public ref class Ejercicio1 : public System::Windows::Forms::Form
	{
	public:

		int ID = 1;
		int* arreglo;
		int cantidad;

		array<List<int>*, 1>^ Hash = gcnew array<List<int>*, 1>(100);


		Ejercicio1(void)
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
		~Ejercicio1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_aceptar;
	protected:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ txtBinaria;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ txtSecuencial;

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
			this->button_aceptar = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txtBinaria = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txtSecuencial = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button_aceptar
			// 
			this->button_aceptar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_aceptar->Location = System::Drawing::Point(348, 103);
			this->button_aceptar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_aceptar->Name = L"button_aceptar";
			this->button_aceptar->Size = System::Drawing::Size(217, 31);
			this->button_aceptar->TabIndex = 33;
			this->button_aceptar->Text = L"Aceptar";
			this->button_aceptar->UseVisualStyleBackColor = true;
			this->button_aceptar->Click += gcnew System::EventHandler(this, &Ejercicio1::button_aceptar_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(348, 359);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(217, 31);
			this->button4->TabIndex = 31;
			this->button4->Text = L"Método de Hash";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Ejercicio1::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(348, 71);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(217, 28);
			this->textBox1->TabIndex = 25;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(348, 394);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(217, 28);
			this->textBox4->TabIndex = 32;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(350, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 21);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Tamaño del arreglo: ";
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 21;
			this->listBox2->Location = System::Drawing::Point(44, 41);
			this->listBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(276, 382);
			this->listBox2->TabIndex = 26;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(348, 263);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(217, 31);
			this->button3->TabIndex = 29;
			this->button3->Text = L"Método binario";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Ejercicio1::button3_Click);
			// 
			// txtBinaria
			// 
			this->txtBinaria->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBinaria->Location = System::Drawing::Point(348, 298);
			this->txtBinaria->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtBinaria->Name = L"txtBinaria";
			this->txtBinaria->Size = System::Drawing::Size(217, 28);
			this->txtBinaria->TabIndex = 30;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(348, 168);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(217, 31);
			this->button2->TabIndex = 27;
			this->button2->Text = L"Método secuencial";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Ejercicio1::button2_Click);
			// 
			// txtSecuencial
			// 
			this->txtSecuencial->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSecuencial->Location = System::Drawing::Point(348, 203);
			this->txtSecuencial->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtSecuencial->Name = L"txtSecuencial";
			this->txtSecuencial->Size = System::Drawing::Size(217, 28);
			this->txtSecuencial->TabIndex = 28;
			// 
			// Ejercicio1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(605, 461);
			this->Controls->Add(this->button_aceptar);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->txtBinaria);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->txtSecuencial);
			this->Name = L"Ejercicio1";
			this->Text = L"Ejercicio1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void funcionRandom() {
			int cantidad = Convert::ToInt16(textBox1->Text);
			arreglo = new int[cantidad];
			for (int i = 0; i < cantidad; i++) {
				int numero = rand() % (900 - (1 + 1)) + 1;
				arreglo[i] = numero;
				insertarHashDinamico(&numero);
			}
		}

		void Burbuja(int n)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n - i - 1; j++)
				{
					if (arreglo[j] > arreglo[j + 1])
					{
						int aux = arreglo[j];
						arreglo[j] = arreglo[j + 1];
						arreglo[j + 1] = aux;
					}
				}
			}
		}

		void llenarListaConArreglo(int n) {
			int contador = 0;
			for (int i = 0; i < n; i++) {
				listBox2->Items->Add(contador + " --- " + arreglo[i]);
				contador++;
			}
		}

		int metodoSecuencial(int cantidad, int numero) {

			for (int i = 0; i < cantidad; i++)
			{
				if (this->arreglo[i] == numero)
				{
					return i;
				}
			}
			return -1;
		}

		int Binario(int m, int s, int numero)
		{
			int medio = 0;
			while (m <= s) {
				medio = (m + s) / 2;
				if (this->arreglo[medio] == numero) {
					return medio;
				}
				if (arreglo[medio] > numero) {
					s = medio;
					medio = (m + s) / 2;
				}
				if (this->arreglo[medio] < numero) {
					m = medio;
					medio = (m + s) / 2;
				}
			}
			return -1;
		}

		int insertarHashDinamico(int* value)
		{
			int Indice = *value % 100;
			if (Hash[Indice] == nullptr)
				Hash[Indice] = new List<int>;
			Hash[Indice]->add(value);
			return Indice;
		}

		int busquedaHashDinamico(int value)
		{
			int Indice = value % 100;
			if (Hash[Indice] == nullptr)
				return -1;
			int Pos = Hash[Indice]->getPosicion(&value);
			if (Pos != 1) {
				return Indice;
			}
			else {
				return -1;
			}

		}

	private: System::Void button_aceptar_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox2->Items->Clear();
		if (textBox1->Text != "") {
			cantidad = Convert::ToInt16(textBox1->Text);
			funcionRandom();
			Burbuja(cantidad);
			llenarListaConArreglo(cantidad);
		}
		else {
			MessageBox::Show("Ingrese un número", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtSecuencial->Text != "") {
			int numero = Convert::ToInt16(txtSecuencial->Text);
			if (metodoSecuencial(cantidad, numero) == -1) {
				MessageBox::Show("El número no existe ");
			}
			else {
				MessageBox::Show("El número se encuentra en la posición: " + metodoSecuencial(cantidad, numero));
			}
		}
		else {
			MessageBox::Show("Ingrese un número", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtBinaria->Text != "") {
			int numero = Convert::ToInt16(txtBinaria->Text);
			if (Binario(0, cantidad, numero) == -1) {
				MessageBox::Show("El número no existe ");
			}
			else {
				MessageBox::Show("El número se encuentra en la posición: " + Binario(0, cantidad, numero));
			}
		}
		else {
			MessageBox::Show("Ingrese un número", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox4->Text != "") {
			int numero = Convert::ToInt16(textBox4->Text);
			busquedaHashDinamico(numero);
			if (busquedaHashDinamico(numero) == -1) {
				MessageBox::Show("El número no existe ");
			}
			else {
				MessageBox::Show("El número se encuentra en la posición de la Hashtable: " + busquedaHashDinamico(numero));
			}
		}
		else {
			MessageBox::Show("Ingrese un número", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
