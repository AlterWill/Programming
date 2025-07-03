using System;

namespace YourNamespace
{
    class Program
    {
        static void Main(string[] args)
        {
            // Your code here
            Console.WriteLine("Hello, World!");
        }
    }
}
//cd $dir && dotnet new console -n tempProject && cd tempProject && Move-Item -Path ../$fileName -Destination Program.cs -Force && dotnet run && cd .. && Remove-Item -Recurse -Force tempProject