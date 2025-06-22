#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    
    char empresa[] = "Exemplo Ltda.";
    char cnpj[] = "12.345.678/0001-99";
    char rua[] = "Rua das Flores";
    char numero[] = "123";
    char bairro[] = "Centro";
    char estado[] = "PI";
    char cidade[] = "Água Branca";
    char tel[] = "(86) 1234-5678";
    char email[] = "contato@empresaexemplo.com.br";
    int dia = 31, mes = 5, ano = 2025;

    
    printf("=========================================================================\n");
    printf("                                Empresa: %s\n", empresa);
    printf("                                CNPJ: %s\n", cnpj);
    printf("                                Endereço: %s, %s - %s - %s/%s\n", rua, numero, bairro, cidade, estado);
    printf("                                Telefone: %s | Email: %s\n", tel, email);
    printf("-------------------------------------------------------------------------\n");
    printf("                          Holerite de Orçamento\n");
    printf("                                Data: %02d/%02d/%d\n", dia, mes, ano);
    printf("=========================================================================\n\n");

  
    printf("| %-40s | %4s | %20s | %12s |\n", "Descrição", "Qtd", "Preço Unitário (R$)", "Total (R$)");
    printf("|------------------------------------------|------|----------------------|--------------|\n");

    printf("| %-40s | %4d | %20.2f | %12.2f |\n", "Notebook Lenovo IdeaPad 3", 1, 3200.00, 3200.00);
    printf("| %-40s | %4d | %20.2f | %12.2f |\n", "Impressora HP LaserJet Pro", 1, 1100.00, 1100.00);
    printf("| %-40s | %4d | %20.2f | %12.2f |\n", "Pacote de Papel A4 500fls", 5, 35.00, 175.00);
    printf("| %-40s | %4d | %20.2f | %12.2f |\n", "Licença MS Office 365 (anual)", 1, 420.00, 420.00);
    printf("| %-40s | %4d | %20.2f | %12.2f |\n", "Serviço de Instalação de Software", 1, 150.00, 150.00);

    printf("|------------------------------------------|------|----------------------|--------------|\n");
    printf("| %-67s | %12.2f |\n", "Total Geral", 5045.00);
    printf("=========================================================================\n\n");

    
    printf("Observações:\n");
    printf(" - Orçamento válido por 10 dias úteis.\n");
    printf(" - Valores sujeitos à disponibilidade em estoque.\n");
    printf(" - Pagamento via transferência bancária ou PIX.\n\n");

    
    printf("Responsável pelo orçamento: João Silva - Vendas Corporativas\n");
    printf("Assinatura: _______________________________________________\n");

    
}
