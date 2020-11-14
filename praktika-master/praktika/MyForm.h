//Для доступа к форме Вычисления подключаем её
#include "MyForm1.h"
#pragma once
#define _CRT_SECURE_NO_WARNINGS
//Подключаем DLL библиотеку
#include "Vector.h"
//Подключаем остальные библиотеки
#include <Windows.h>
#include <fstream>
#include <iostream>
#include <cstdio>
#include <ctime>
#include <thread>
#include <algorithm>

namespace praktika {

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
	//Все элементы формы
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;

	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Описание элемента label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 219);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Рыжкова Светлана";
			// 
			//Описание элемента label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 242);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Запуск";
			// 
			//Описание элемента label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(30, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(224, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Здравствуйте, авторизуйтесь, пожалуйста";
			// 
			//Описание элемента label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(71, 52);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Фамилия";
			// 
			//Описание элемента label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(96, 87);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Имя";
			// 
			//Описание элемента label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(71, 116);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Отчество";
			// 
			//Описание элемента textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(152, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 6;
			// 
			//Описание элемента textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(152, 84);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 7;
			// 
			//Описание элемента textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(152, 116);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 8;
			// 
			//Описание элемента button1
			// 
			this->button1->Location = System::Drawing::Point(83, 159);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Авторизоваться";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			//Описание элемента MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 264);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Авторизация";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Действия при запуске формы: отображение имени и времени
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		struct tm* date;
		char Current_date[100];
		const time_t timer = time(NULL);
		date = localtime(&timer);
		strftime(Current_date, 100, "%d.%m.%Y %H:%M:%S", date);
		System::String^ strCLR = gcnew System::String(Current_date);
		label2->Text += strCLR;
		
	}
	//Действия при нажатии кнопки Авторизоваться: включается вторая форма, ФИО пользователя переносится в надписи на ней.
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ form = gcnew MyForm1;
	form->label1->Text = textBox1->Text;
	form->label2->Text = textBox2->Text;
	form->label3->Text = textBox3->Text;
	form->Show(); (Visible = true);
	
}
};
}
