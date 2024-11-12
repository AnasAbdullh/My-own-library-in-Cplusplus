#pragma once
#include <iostream>
using namespace std;
enum enPrimeOrNotPrime
{

    Prime = 1,
    NotPrime = 2
};
enum enCharType
{
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialCharacter = 3,
    Digit = 4
};
namespace Mylib
{
    short ReadNUmberPositive(string Message)
    {
        short Number = 0;

        do
        {
            cout << Message << endl;
            cin >> Number;
        } while (Number <= 0);

        return Number;
    }

    enPrimeOrNotPrime CheckPrime(short Num)
    {
        int M = (Num / 2);

        for (short i = 2; i <= M; i++)
        {
            if (Num % i == 0)
            {
                return enPrimeOrNotPrime::NotPrime;
            }
        }
        return enPrimeOrNotPrime::Prime;
    }

    void PrintPrime(short Number)
    {
        cout << "\n";
        cout << "Prime Number From :" << 1 << " To " << Number;
        cout << " are : " << endl;
        for (short i = 1; i <= Number; i++)
        {
            if (CheckPrime(i) == enPrimeOrNotPrime::Prime)
            {
                cout << i << endl;
            }
        }
    }
    bool IsPerfectNumber(int Number)
    {
        short sum = 0;
        short mimed = (Number / 2);
        for (short i = 1; i <= mimed; i++)
        {
            //  cout << i << endl;
            if (Number % i == 0)
            {

                sum += i;
            }
        }

        return Number == sum;
    }

    void PrintPerfectOrNotPerfect(int Number)
    {

        if (IsPerfectNumber(Number))
        {
            cout << Number << " It is Perfect" << endl;
        }
        else
        {
            cout << Number << " It is Not Perfect" << endl;
        }
    }
    void PrintNumberPerfect(int Number)
    {
        for (size_t i = 1; i <= Number; i++)
        {
            if (IsPerfectNumber(i))
            {
                cout << i << endl;
            }
        }
    }

    void DigitsNumber(int Number)
    {
        int Remainder = 0;
        while (Number > 0)
        {
            Remainder = Number % 10;
            Number = Number / 10;

            cout << Remainder << endl;

        }
    }

    int SumOfDigits(int Number)
    {
        int Remainder = 0, Sum = 0;

        while (Number > 0)
        {
            Remainder = Number % 10;
            Number /= 10;
            Sum += Remainder;

        }
        return Sum;
    }

    int ReverenceNumber(int Number)
    {
        int Remainder = 0, count = 0;
        while (Number > 0)
        {
            Remainder = Number % 10;
            Number /= 10;
            count = count * 10 + Remainder;
        }
        return count;
    }

    int SumNumber(int Number, short checkNum)
    {
        int count = 0, Remainder = 0;
        while (Number > 0)
        {
            Remainder = Number % 10;
            Number /= 10;
            if (checkNum == Remainder)
            {
                count++;
            }
        }
        return count;
    }

    int CountDigitsFrequency(int Number, short checkNum)
    {
        int count = 0, Remainder = 0;
        while (Number > 0)
        {
            Remainder = Number % 10;
            Number /= 10;
            if (checkNum == Remainder)
            {
                count++;
            }
        }
        return count;
    }

    void PrintAllDigitsFrequency(int Number)
    {

        for (size_t i = 0; i < 10; i++)
        {
            short DigitsFrequency = 0;
            DigitsFrequency = CountDigitsFrequency(Number, i);

            if (DigitsFrequency > 0)
            {
                cout << " Digit " << i << " Frequency is " << DigitsFrequency << " Time(s) " << endl;
            }
        }
    }

    int ReverenceNumber(int Number)
    {
        int Remainder = 0, count = 0;
        while (Number > 0)
        {
            Remainder = Number % 10;
            Number /= 10;
            count = count * 10 + Remainder;
        }
        return count;
    }

    bool IsPalindrome(int Number)
    {
        return Number == ReverenceNumber(Number);
    }

    void InvertedNumber(int Number)
    {
        for (size_t i = Number; i >= 1; i--)
        {
            for (size_t count = 1; count <= i; count++)
            {
                cout << i;
            }
            cout << "\n";
        }
    }

    void InvertedNumber(int Number)
    {
        for (size_t i = 1; i <= Number; i++)
        {
            for (size_t count = 1; count <= i; count++)
            {
                cout << i;
            }
            cout << "\n";
        }
    }

    void InvertedLetter(int Number)
    {
        for (size_t i = Number + 65 - 1; i >= 65; i--)
        {
            for (size_t count = 1; count <= Number - (Number + 65 - 1 - i); count++)
            {
                cout << (char)i;
            }
            cout << "\n";
        }
    }

    void RecencyInvertedNumber(int Number)
    {
        int array[2] = { Number + 65 - 1, 65 };
        for (size_t i = 65; i <= Number + 65 - 1; i++)
        {
            for (size_t count = 1; count <= i - 65 + 1; count++)
            {
                cout << (char)i;
            }
            cout << "\n";
        }
    }

    void PrintAllWorldsAAAToZZZ()
    {
        string word = "";
        for (size_t A = 65; A <= 90; A++)
        {
            for (size_t B = 65; B <= 90; B++)
            {
                for (size_t C = 65; C <= 90; C++)
                {
                    word += A;
                    word += B;
                    word += C;

                    cout << word << "\n";

                    word = "";
                }
            }
        }
    }

    string ReadPassword()
    {
        string Password;
        cout << "Enter Password System " << endl;
        cin >> Password;
        return Password;
    }

    bool GuessPassword(string OriginalPassword)
    {
        string Word = "";
        int count = 0;
        for (char i = 'A'; i <= 'Z'; i++)
        {
            for (char b = 'A'; b <= 'Z'; b++)
            {
                for (char c = 'A'; c <= 'Z'; c++)
                {

                    Word += i;
                    Word += b;
                    Word += c;
                    count++;

                    cout << "Trial [" << count << "] : " << Word << endl;

                    if (OriginalPassword == Word)
                    {
                        cout << "\n Password is " << Word << endl;
                        cout << " Found After " << count << " Trial(s)" << endl;
                        return true;
                    }
                    Word = "";
                }
            }
        }
        return false;
    }

    string Encryptions(string txt, short EncryptTinKey)
    {
        for (short i = 0; i <= txt.length(); i++)
        {
            txt[i] = char((int)txt[i] + EncryptTinKey);
        }
        return txt;
    }
    string Decryptions(string txt, short EncryptTinKey)
    {
        for (size_t i = 0; i < txt.length(); i++)
        {
            txt[i] = char((int)txt[i] - EncryptTinKey);
        }
        return txt;
    }

    int RandomNumber(int From, int To)
    {
        // Function to generate a random Number
        int randNum = rand() % (To - From + 1) + From;

        return randNum;
    }

    char GetRandomCharater(enCharType CharType)
    {
        switch (CharType)
        {
        case enCharType::SmallLetter:
            return char(RandomNumber(97, 122));
        case enCharType::CapitalLetter:
            return char(RandomNumber(65, 90));
        case enCharType::SpecialCharacter:
            return char(RandomNumber(33, 47));
        case enCharType::Digit:
            return char(RandomNumber(48, 57));
        }
        return '?'; // ???? ???????? ??? ??? ???? ?? ????
    }

    string GenerateWord(enCharType CharType, short Length)
    {
        string Word;
        for (size_t i = 1; i <= Length; i++)
        {
            Word += GetRandomCharater(CharType);
        }
        return Word;
    }
    string GenerateKey()
    {
        string Key = "";

        Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
        Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
        Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
        Key += GenerateWord(enCharType::CapitalLetter, 4);

        return Key;
    }
    void PrintNumberUser(int input)
    {
        for (size_t i = 1; i <= input; i++)
        {
            cout << " Key [" << i << "] :";
            cout << GenerateKey() << endl;
        }
    }

    void ReadArray(int NumberArray[100], int& Arraylength)
    {
        cout << "ENTER Number of the elements" << endl;
        cin >> Arraylength;

        cout << "enter the array elements " << endl;

        for (size_t i = 0; i < Arraylength; i++)
        {
            cout << "elements [" << i + 1 << "] :" << endl;
            cin >> NumberArray[i];
        }
    }
    void PrintArray(int NumberArray[100], int arraylength)
    {
        for (size_t i = 0; i < arraylength; i++)
        {
            cout << NumberArray[i] << " ";
        }
    }
    int recitesTime(int Number, int check, int array[100])
    {
        short count = 0;

        for (size_t i = 0; i < Number; i++)
        {
            if (check == array[i])
            {
                count++;
            }
        }
        return count;
    }

    void ReadyFillArraywhitNumber(int Array[100], int& Length)
    {
        cout << "Enter The Elements Array " << endl;
        cin >> Length;
        for (size_t i = 0; i < Length; i++)
        {
            Array[i] = RandomNumber(1, 100);
        }
    }
    void PrintArray(int Array[100], int Length)
    {
        for (size_t i = 0; i < Length; i++)
        {
            cout << Array[i] << " ";
        }
    }

    void MaxOfRandomNumber(int array[100], int length)
    {
        int Max = 0;

        for (size_t c = 0; c < length; c++)
        {
            if (array[c] > Max)
            {
                Max = array[c];
            }
        }
        cout << "\nMax Of Random Array " << Max << endl;
    }

    void MinNumberInArray(int array[100], int length)
    {
        int Max = array[0];

        for (size_t c = 0; c < length; c++)
        {
            if (array[c] < Max)
            {
                Max = array[c];
            }
        }
        cout << "\nMax Of Random Array " << Max << endl;
    }

    int SumOfRandomArray(int array[100], int length)
    {
        int count = 0;

        for (size_t c = 0; c < length; c++)
        {
            count += array[c];
        }
        return count;
    }

    int AverageArray(int array[100], int length)
    {
        int count = 0;
        int AverageArray = 0;

        for (size_t c = 0; c < length; c++)
        {
            count += array[c];
        }
        AverageArray = count / length;
        return AverageArray;
    }

    float Average(int array[100], int length)
    {
        return (float)SumOfRandomArray(array, length) / length;
    }

    void CopyArray(int arrSource[100], int arrDestrins[100], int Length)
    {
        for (size_t i = 0; i < Length; i++)
        {
            arrDestrins[i] = arrSource[i];
        }
    }

    enPrimeOrNotPrime IsCheckNumberPrime(int Number)
    {
        if (Number < 2) // Any number less than 2 is not prime
            return enPrimeOrNotPrime::NotPrime;

        int M = round(Number / 2);
        for (int count = 2; count <= M; count++)
        {
            if (Number % count == 0)
            {
                return enPrimeOrNotPrime::NotPrime; // Not prime if divisible by any number
            }
        }
        return enPrimeOrNotPrime::Prime;
    }

    void CheckPrime(int Array[], int length, int Prime[], int& PrimeLength)
    {
        PrimeLength = 0; // Initialize the length of the prime array to zero
        for (int i = 0; i < length; i++)
        {
            if (IsCheckNumberPrime(Array[i]) == enPrimeOrNotPrime::Prime)
            {
                Prime[PrimeLength] = Array[i]; // Store prime numbers
                PrimeLength++;
            }
        }
    }

    void ArrayTwo(int arr2[100], int Length)
    {
        for (size_t i = 0; i < Length; i++)
        {
            arr2[i] = RandomNumber(1, 100);
        }
    }
    void SumTwoArray(int ArraySource[100], int TwoArray[100], int SumArray[100], int length)
    {
        for (size_t i = 0; i < length; i++)
        {
            SumArray[i] = TwoArray[i] + ArraySource[i];
        }
    }

    void Swap(int& A, int& B)
    {
        int Temp = 0;
        Temp = A;
        A = B;
        B = Temp;
    }

    void SufflenArray(int Array[100], int length)
    {
        for (size_t i = 0; i < length; i++)
        {
            Swap(Array[RandomNumber(1, length) - 1], Array[RandomNumber(1, length) - 1]);
        }
    }

    void Reverse(int Array[100], int arrReverse[100], int length)
    {

        for (short i = length - 1; i >= 0; i--)
        {
            arrReverse[i] = Array[length - 1 - i];
        }
    }

    void FillArrayWhitNumber(int input, string Array[100])
    {
        for (size_t i = 0; i < input; i++)
        {

            Array[i] = GenerateKey();
        }
    }

    short FindNumberPositInArray(int Array[100], int length, int FindNumber)
    {
        for (short i = 0; i < length; i++)
        {
            if (Array[i] == FindNumber)
            {
                return i;
            }
        }
        return -1;
    }

    bool checkNumberInArray(int arr[100], int length, int Find)
    {
        return FindNumberPositInArray(arr, length, Find) != -1;
    }

    int ReadNumber()
    {
        int Number = 0;

        cout << "\nPlase Enter a number " << endl;
        cin >> Number;

        return Number;
    }

    void AddTomoreElements(int arr[100], int& length, int Number)
    {
        length++;
        arr[length - 1] = Number;
    }
    void inputToUser(int arr[100], int& length)
    {

        bool Check = true;

        do
        {
            AddTomoreElements(arr, length, ReadNumber());
            cout << "do to wants array " << endl;
            cin >> Check;

        } while (Check == 1);
    }

    void AddArrayElement(int arr[], int& length, int number)
    {
        if (length < 100)
        { // Check array bounds
            arr[length] = number;
            length++;
        }
        else
        {
            cout << "Array is full.  Cannot add more elements." << endl;
        }
    }

    void FillArrayWithRandomNumbers(int arr[], int& length)
    {
        cout << "Enter the number of elements in the array: ";
        cin >> length;

        if (length > 100)
        { // Check array bounds
            cout << "Maximum array size is 100. Please enter a smaller value." << endl;
            length = 100; // Set length to maximum allowed
        }

    }

    void FillArrayWithRandomNumbers(int arr[], int& length)
    {
        cout << "Enter the number of elements in the array: ";
        cin >> length;

        if (length > 100)
        { // Check array bounds
            cout << "Maximum array size is 100. Please enter a smaller value." << endl;
            length = 100; // Set length to maximum allowed
        }

        for (int i = 0; i < length; i++)
        {
            arr[i] = RandomNumber(1, 100);
        }
    }

    void AddArrayElements(int arr[100], int& length, int Number)
    {
        length++;
        arr[length - 1] = Number;
    }

    // Function to copy one array to another
    void OddNumberInArray(int arr[100], int length, int& OddArrayLength, int OddArray[100])
    {

        for (int i = 0; i < length; i++)
        {

            if (arr[i] % 2 != 0)
            {
                AddArrayElements(OddArray, OddArrayLength, arr[i]);
            }
        }
    }

}
