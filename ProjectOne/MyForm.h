#pragma once
#include "fuel.h"
#include "fuel_station.h"
#include "header.h"
#include <fstream>
#include <iostream>
#include "msclr/marshal_cppstd.h"
using namespace msclr::interop;
namespace ProjectOne {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	vector <fuel_station> Fuel_station;
	

	fstream all;
	string SysToStd(String^ str)
	{
		return marshal_as<string>(str);
	}

	static System::String^ StdToSys(std::string StdStr)
	{
		return gcnew System::String(StdStr.c_str());
	}
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
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

















	protected:


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(100, 64);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(444, 335);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Город ";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Улица";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Бюджет";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Объем хранилища для 1 типа топлива";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->Column5
			});
			this->dataGridView2->Location = System::Drawing::Point(813, 64);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(544, 335);
			this->dataGridView2->TabIndex = 1;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Тип топлива";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Объем поставки";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Код продавца";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Цена поставки";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Продано";
			this->Column5->Name = L"Column5";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(185, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(270, 43);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Список заправочных станций";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(954, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(270, 43);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Список поставок топлива";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(185, 413);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(270, 43);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Добавление заправочной станции";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(965, 413);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(270, 43);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Закупка поставки";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(178, 481);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(109, 28);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(391, 481);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(109, 28);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(178, 554);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(109, 28);
			this->textBox3->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(391, 554);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(109, 28);
			this->textBox4->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(126, 481);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 28);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Город";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(339, 481);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 28);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Улица";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(90, 554);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(82, 28);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Бюджет (в долларах)";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(326, 536);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 57);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Объем хранилища для 1 типа топлива";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(513, 516);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(958, 543);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(399, 50);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Купить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(734, 559);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(62, 32);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Цена поставки";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->Location = System::Drawing::Point(1160, 481);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(82, 28);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Код продавца";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->Location = System::Drawing::Point(947, 481);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(67, 28);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Объем поставки";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->Location = System::Drawing::Point(734, 481);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(67, 28);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Тип топлива";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(807, 481);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(109, 28);
			this->textBox5->TabIndex = 18;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(1020, 481);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(109, 28);
			this->textBox6->TabIndex = 17;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(1248, 481);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(109, 28);
			this->textBox7->TabIndex = 16;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(807, 559);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(109, 28);
			this->textBox8->TabIndex = 15;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(550, 351);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(78, 48);
			this->button3->TabIndex = 24;
			this->button3->Text = L"Очистить список станций";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1311, 405);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(78, 48);
			this->button4->TabIndex = 25;
			this->button4->Text = L"Очистить список поставок";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1420, 643);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		
		//figure it out
		
		dataGridView2->Rows->Clear();
		for (int i = 0;i<Fuel_station[dataGridView1->CurrentCell->RowIndex].get_fuels().size();i++)
		{
			dataGridView2->Rows->Add(
				StdToSys(Fuel_station[dataGridView1->CurrentCell->RowIndex].get_fuel(i).get_type()),
				StdToSys(Fuel_station[dataGridView1->CurrentCell->RowIndex].get_fuel(i).get_volume()),
				StdToSys(Fuel_station[dataGridView1->CurrentCell->RowIndex].get_fuel(i).get_seller_code()),
				StdToSys(Fuel_station[dataGridView1->CurrentCell->RowIndex].get_fuel(i).get_cost())
			);
		}
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {







	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {


}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	//all.open("TextFile1.txt", ios::in | ios::out);
	//all.seekg(0, ios_base::end);
	fuel_station f_fuel_station;
	f_fuel_station.set_city(SysToStd(textBox1->Text));
	f_fuel_station.set_street(SysToStd(textBox2->Text));
	f_fuel_station.set_budget(SysToStd(textBox3->Text));
	f_fuel_station.set_storage_for_one_type(SysToStd(textBox4->Text));
	if ((f_fuel_station.get_city() != (""))&&( f_fuel_station.get_street() != ("")) && (f_fuel_station.get_budget() != ("") )&& (f_fuel_station.get_storage_for_one_type() != ("")))
	{
		Fuel_station.push_back(f_fuel_station);
	}
	//all.seekg(0, ios_base::end);
	//all << f_fuel_station.get_city() << f_fuel_station.get_street() << f_fuel_station.get_budget() << f_fuel_station.get_storage_for_one_type();
	//	all.close;
	if ((f_fuel_station.get_city() != ("")) && (f_fuel_station.get_street() != ("")) && (f_fuel_station.get_budget() != ("")) && (f_fuel_station.get_storage_for_one_type() != ("")))
	{
		dataGridView1->Rows->Add(
			StdToSys(Fuel_station[Fuel_station.size() - 1].get_city()),
			StdToSys(Fuel_station[Fuel_station.size() - 1].get_street()),
			StdToSys(Fuel_station[Fuel_station.size() - 1].get_budget()),
			StdToSys(Fuel_station[Fuel_station.size() - 1].get_storage_for_one_type())
		);
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
	}
	
}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		vector <fuel> Fuel;
		fuel f_fuel;
		f_fuel.set_type(SysToStd(textBox5->Text));
		f_fuel.set_volume(SysToStd(textBox6->Text));
		f_fuel.set_seller_code(SysToStd(textBox7->Text));
		f_fuel.set_cost(SysToStd(textBox8->Text));
		
	if ((f_fuel.get_type() != ("")) && (f_fuel.get_volume() != ("")) && (f_fuel.get_seller_code() != ("")) && (f_fuel.get_cost() != ("")))
	{
	//	if (stoi(Fuel_station[dataGridView1->CurrentCell->RowIndex].get_storage_for_one_type()) >= stoi(f_fuel.get_volume()))
		//{
			//if (stoi(Fuel_station[dataGridView1->CurrentCell->RowIndex].get_budget()) >= stoi(f_fuel.get_cost()))
			//{
				
				Fuel_station[dataGridView1->CurrentCell->RowIndex].set_fuels(f_fuel);
//Fuel_station[dataGridView1->CurrentCell->RowIndex].set_budget(to_string(stoi(Fuel_station[dataGridView1->CurrentCell->RowIndex].get_budget()) - stoi(f_fuel.get_cost())));
			//	Fuel_station[dataGridView1->CurrentCell->RowIndex].set_storage_for_one_type(to_string(stoi(Fuel_station[dataGridView1->CurrentCell->RowIndex].get_storage_for_one_type()) - stoi(f_fuel.get_volume())));
				Fuel.push_back(f_fuel);
				dataGridView2->Rows->Add(
					StdToSys(Fuel[Fuel.size() - 1].get_type()),
					StdToSys(Fuel[Fuel.size() - 1].get_volume()),
					StdToSys(Fuel[Fuel.size() - 1].get_seller_code()),
					StdToSys(Fuel[Fuel.size() - 1].get_cost())
				);
				textBox5->Clear();
				textBox6->Clear();
				textBox7->Clear();
				textBox8->Clear();
			//}
		//	else
		//	{
			//	::System::Windows::Forms::MessageBox::Show("Не хватает бюджета");
			//}
		//}
		//else
		//{
		
		//	::System::Windows::Forms::MessageBox::Show("Не хватает объема хранилища");
		//}
				
	}
	





}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Fuel_station.clear();
	dataGridView1->Rows->Clear();
	dataGridView2->Rows->Clear();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Fuel_station[dataGridView1->CurrentCell->RowIndex].clear_fuel();
	dataGridView2->Rows->Clear();
}
};
}
