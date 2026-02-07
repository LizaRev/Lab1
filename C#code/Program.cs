using System;

namespace MyProgram
{
    class Program
    {
        static void Main(string[] array)
        {
            Console.WriteLine("Введіть, будь ласка, рядок з цифр:");
            string input = Console.ReadLine()!;

            MString myString = new MString(); 
            myString.SetValue(input);          

            Console.WriteLine("Початковий рядок: " + myString.GetValue());
            Console.WriteLine("Довжина рядка: " + myString.Length());

            myString.RemoveFive();             
            Console.WriteLine("Рядок після видалення '5': " + myString.GetValue());
            Console.WriteLine("Довжина рядка після видалення '5': " + myString.Length());
        }
    }
}