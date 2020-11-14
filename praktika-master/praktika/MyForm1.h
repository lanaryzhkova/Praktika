#pragma once
#define _CRT_SECURE_NO_WARNINGS
//Подключаем DLL
#include "Vector.h"
//Подключаем остальные библиотеки
#include <Windows.h>
#include <fstream>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <algorithm>
#include <string>
using namespace std;


namespace praktika {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//Объявляем массив
	static int values[15][15];
	//Описываем функцию заполнения массива, в котором к элементам гл. диагонали прибавляется 3
	static void FillMassiv3() {

		FILE* f = fopen("massiv+3.txt", "w");
		for (int i = 0; i < 10; i++)
			values[i][i] = (int)values[i][i] + 3;
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				fprintf(f, "%d\t", values[i][j]);


			}
			fprintf(f, "\n");
		}
		fclose(f);
	}
	//Описываем функцию заполнения массива
	static void FillMassiv() {
		srand(time(0));
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				values[i][j] = rand() % 10;
			}
		}
		FILE* f = fopen("massiv.txt", "w");
		rewind(f);
		fprintf(f, "Исходный массив:\n");
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				fprintf(f, "%d\t", values[i][j]);
				
			}
			fprintf(f, "\n");
		}
		fprintf(f, "\n");
		fclose(f);
	}
	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
		//Элменты, которые находятся на форме
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	public: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Label^ label3;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			//Описание элемента button2
			// 
			this->button2->Location = System::Drawing::Point(97, 26);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(158, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Заполнить файл числами";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(16, 69);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(239, 201);
			this->dataGridView1->TabIndex = 2;
			// 
			//Описание элемента button3
			// 
			this->button3->Location = System::Drawing::Point(299, 26);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(219, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Прибавить к числам гл. диагонали 3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(279, 69);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Size = System::Drawing::Size(239, 201);
			this->dataGridView2->TabIndex = 4;
			// 
			//Описание элемента label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"label1";
			// 
			//Описание элемента label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"label2";
			// 
			//Описание элемента label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"label3";
			// 
			//Описание элемента MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(530, 291);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Name = L"MyForm1";
			this->Text = L"Вычисления";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Действия при нажатии на кнопку Заполнить файл числами: запускаем поток для функции, выводим матрицу в dataGridView1
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		thread thr1(&FillMassiv);
		thr1.join();
		dataGridView1->RowCount = 10;
		dataGridView1->ColumnCount = 10;
		for (int i = 0; i < 10; i++)
		{
			for(int j=0; j<10; j++)
				dataGridView1->Rows[i]->Cells[j]->Value = values[i][j];
		}
	}	   
		//Действия при нажатии на кнопку Прибавить к числам гл. диагонали 3:запускаем поток для функцииб выводим пробразованную матрицу в dataGridView2 
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		thread thr(&FillMassiv3);
		thr.join();
		dataGridView2->RowCount = 10;
		dataGridView2->ColumnCount = 10;
		for (int i = 0; i < 10; i++)
		{
			for(int j=0; j<10;j++)
				dataGridView2->Rows[j]->Cells[i]->Value = values[i][j];
		}
	}
};
}
