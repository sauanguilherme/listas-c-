using System;
class Operadora {
    static void Main() {
        Console.Write("Minutos usados: ");
        int minutos = int.Parse(Console.ReadLine());

        double conta = 50.0;
        if (minutos > 100)
            conta += (minutos - 100) * 2.0;

        Console.WriteLine($"Valor a pagar: R$ {conta:F2}");
    }
}