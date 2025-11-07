using System;
class Passagem {
    static void Main() {
        Console.WriteLine("Códigos de destino:");
        Console.WriteLine("1 - Morros (R$ 120,00)");
        Console.WriteLine("2 - Barreirinhas (R$ 200,00)");
        Console.WriteLine("3 - Bacabeira (R$ 50,00)");
        Console.WriteLine("4 - Rosário (R$ 80,00)");

        Console.Write("Informe o código do destino: ");
        int codigo = int.Parse(Console.ReadLine());

        Console.Write("Ida e volta (S/N)? ");
        char resposta = char.Parse(Console.ReadLine().ToUpper());

        double valor = 0.0;
        switch (codigo) {
            case 1: valor = 120; break;
            case 2: valor = 200; break;
            case 3: valor = 50; break;
            case 4: valor = 80; break;
            default:
                Console.WriteLine("Código inválido!"); return;
        }

        double total = (resposta == 'S') ? valor * 2 * 0.9 : valor;
        Console.WriteLine($"Valor total a pagar: R$ {total:F2}");
    }
}