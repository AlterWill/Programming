using System;

namespace Testing
{
    class Program{
        static void Main(string[] a){
            Console.WriteLine("-------------");
            Console.WriteLine("hello world");
            Console.WriteLine(4+1-2*6/8F);
            Console.Write(4+1-2*6/8);
            Console.WriteLine("-------------\n");
            Console.Clear();
            Console.Write("Enter you name:");   
            string b=Console.ReadLine();
            Console.WriteLine(b);
            Console.WriteLine('1');
        }
    }
}