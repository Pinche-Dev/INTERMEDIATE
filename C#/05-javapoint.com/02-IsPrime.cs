using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

  static class IsPrimeN
    {
    public static bool IsPrime(int n)
    {
        for (int i = 0; i < n / 2; i++)
        {
            if (i % 2 == 0)
            {
                Console.WriteLine(n + " is not a prime number");
                return true;
            }
        }
        Console.WriteLine(n + " is a prime number");
        return false;
    }
    }

