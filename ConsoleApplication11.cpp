#include<iostream>
using namespace std;



//Задание #1
//class Fraction 
//{
//	int Num, Denom;
//
//public:
//    Fraction() 
//	{
//		Num = 1;
//		Denom = 1;
//	}
//
//	Fraction(int X,int Y) 
//	{
//		Num = X;
//		Denom = Y;
//	}
//	
//	void SetNum(int value)
//	{
//		Num = value;
//	}
//
//	void SetDenom(int value)
//	{
//		Denom = value;
//		
//    }
//	int GetNum()
//	{
//		return Num;
//	}
//
//	int GetDenom() 
//	{
//		return Denom;
//	}
//
//	void Sum(Fraction Fr) 
//	{
//		Num = Num * Fr.Denom + Fr.Num * Denom;
//		Denom = Denom * Fr.Denom;
//		cout << "Sum:" << Num << "/" << Denom << "\n\n";
//    }
//	void Dif(Fraction Fr) 
//	{
//		Num = Num * Fr.Denom - Fr.Num * Denom;
//		Denom = Denom * Fr.Denom;
//		cout << "Difference:" << Num << "/" << Denom << "\n\n";
//	}
//
//	void Mult(Fraction Fr) 
//	{
//		Num *= Fr.Num;
//		Denom *= Fr.Denom;
//		cout << "Multiply:" << Num << "/" << Denom << "\n\n";
//	}
//
//	void Div(Fraction Fr) 
//	{
//		if (Fr.Num != 0) 
//		{
//			Num *= Fr.Denom;
//			Denom *= Fr.Num;
//			cout << "Dived:" << Num << "/" << Denom << "\n\n";
//		}
//		else 
//		{
//		  cout << "Error." << "\n";
//		}
//	}
//
//	void Output() 
//	{
//		cout << Num << "/" << Denom << "\n\n";
//	}
//
//	Fraction operator+(const Fraction& Fr) 
//	{
//		int Sum_Num = Num * Fr.Denom + Fr.Num * Denom;
//		int Sum_Demom = Denom * Fr.Denom;
//		return Fraction(Sum_Num, Sum_Demom);
//	}
//
//	Fraction operator-(const Fraction& Fr)
//	{
//		int Dif_Num = Num * Fr.Denom - Fr.Num * Denom;
//		int Dif_Denom = Denom * Fr.Denom;
//		return Fraction(Dif_Num, Dif_Denom);
//	}
//
//	Fraction operator*(const Fraction& Fr) 
//	{
//		int Mult_Num = Num * Fr.Num;
//		int Mult_Denom = Denom * Fr.Denom;
//		return Fraction(Mult_Num, Mult_Denom);
//	}
//
//    Fraction operator*(int num)
//	{
//		int Mult_Num = Num * num;
//		return Fraction(Mult_Num, Denom);
//	}
//
//
//	Fraction operator/(const Fraction& Fr)  
//	{
//		if (Fr.Num != 0)
//		{
//			int Div_Num = Num * Fr.Num;
//			int Div_Denom = Denom * Fr.Denom;
//			return Fraction(Div_Num, Div_Denom);
//		}
//		else
//		{
//			cout << "Error." << "\n";
//		}
//	}
//};
//
//Fraction operator*(int num, Fraction& Fr)
//{
//	int Mult_Num = num * Fr.GetNum();
//	return Fraction(Mult_Num, Fr.GetDenom());
//}
//
//
//int main() 
//{
//	Fraction first_frac(2,4);
//	Fraction second_frac(5,10);
//
//	Fraction frac = 2 * second_frac;
//
//	frac.Output();
//}




//Задание 2
//class MyString
//{
//    char* str;
//    int size;
//    static int count;
//
//public:
//    MyString()
//    {
//        size = 80;
//        str = new char[size + 1];
//        count++;
//    }
//
//    MyString(const MyString& copy)
//    {
//        size = copy.size;
//        str = copy.str;
//        count++;
//    }
//
//    MyString(int Size)
//    {
//        size = Size;
//        str = new char[size + 1];
//        count++;
//    }
//
//    MyString(const char* arr)
//    {
//        size = strlen(arr);
//        str = new char[size + 1];
//        strcpy_s(str, size + 1, arr);
//        count++;
//    }
//
//    
//    void SetStr(char* string)
//    {
//        str = string;
//    }
//        
//    char* GetStr()
//    {
//        return str;
//    }
//       
//
//    void Input()
//    {
//        cout << "Input string:";
//        cin.getline(str, size + 1);
//    }
//
//    void Output()
//    {
//        if (str == nullptr)
//        {
//            cout << "Empty object!\n";
//            return;
//        }
//        cout << "String: " << str << "\n\n\n";
//    }
//
//    static int GetCount()
//    {
//        return count;
//    }
//
//    /* ~MyString()
//     {
//         delete[] str;
//         count--;
//     }*/
//
//    MyString operator++() 
//    {
//        int sz = strlen(str);
//        char* new_str = new char[sz + 2];
//        
//        strcpy_s(new_str, sz + 2, str);
//        
//        new_str[sz] = 'x';
//        new_str[sz + 1] = '\0';
//        
//        delete[] str;
//        str = new_str;
//        
//        return *this;
//    }
//    MyString operator++(int)
//    {
//        int sz = strlen(str);
//        char* new_str = new char[sz + 2];
//
//        strcpy_s(new_str, sz + 2, str);
//
//        new_str[sz] = 'x';
//        new_str[sz + 1] = '\0';
//
//        delete[] str;
//        str = new_str;
//
//        return *this;
//    }
//
//    MyString operator--()
//    {
//        str[size - 1] = '\0';
//        
//        return *this;
//    }
//    MyString operator--(int)
//    {
//        str[size - 1] = '\0';
//
//        return *this;
//    }
//
//    MyString operator+(int value) 
//    {
//        int sz = strlen(str);
//        char* new_str = new char[sz + 1 + value];
//
//        strcpy_s(new_str, sz + 1 + value, str);
//        
//        for (int i = 0; i < value; i++)
//        {
//            new_str[sz + i] = 'x';
//        }
//        
//        new_str[sz + value] = '\0';
//        
//        return MyString(new_str);
//    }
//
//
//    MyString operator-(int value) 
//    {
//        int sz = strlen(str);
//        str[sz - value] = '\0';
//        
//        return *this;
//    }
//    MyString& operator=(const MyString& obj)
//    {
//        if (!(this == &obj))
//        {
//            if (str != nullptr)
//            {
//                delete[] str;
//            }
//            if (obj.str == nullptr)
//            {
//                str = nullptr;
//                size = obj.size;
//                return *this;
//            }
//            str = new char[strlen(obj.str) + 1];
//            strcpy_s(str, strlen(obj.str) + 1, obj.str);
//            size = obj.size;
//        }
//        return *this;
//    }
//};
//
//int MyString::count = 0;
//
//MyString operator+(int size, MyString& obj)
//{
//    char* str = obj.GetStr();
//    int sz = strlen(str);
//
//    char* new_str = new char[sz + 1 + size];
//
//    for (int i = 0; i < size; i++)
//    {
//        new_str[i] = 'x';
//    }
//
//    strcpy_s(new_str + size, sz + 1, str);
//
//    return MyString(new_str);
//
//}
//
//int main()
//{
//    MyString obj1;
//    MyString obj2(20);
//    MyString obj3("Hello");
//    obj3.Output();
//    
//    MyString sum = 5 + obj3;  
//    sum.Output();
//}







