#include<stdio.h>
#include<math.h>

//function declaration
void print_menu(); 
double division(double , double );
int modulus(int , int );
int main(){
    int choice;
    double first, second, result;
    while(1){
           
            print_menu();
            scanf("%d",&choice);
            if(choice == 7){
                break;
            }

            if(choice < 1 || choice > 7){
                fprintf(stderr,"Invalid menue choice\n");
                continue;
            }
            printf("Enter the first number:");
            scanf("%lf", &first);
            printf("Enter the second number:");
            scanf("%lf", &second);

            switch(choice)
            {
                case 1: //Add
                result = first + second;
                break;
                case 2://Subtract
                result = first - second;
                break;
                case 3://Multiply
                result = first * second;
                break;
                case 4://Divide
                result = division(first, second);
                break;
                case 5://Modulus
                result = modulus((int)first, (int)second);
                break;
                case 6://Power
                result =pow(first,second);
                break;

            }
                
                if (!isnan(result)){
                    printf("Result of operation is: %.2f", result);
                }
            
            }
            return 0;
        }
            void print_menu() {

            printf("____________________________________________\n");
            printf("\n\n\nwelcome to the simple calculator program\n");
            printf("please select the operation you want to perform:\n");
            printf("1.addition(+)\n");
            printf("2.subtraction(-)\n");
            printf("3.multiplication(*)\n");
            printf("4.division(/)\n");
            printf("5.modulus(%%)\n");
            printf("6.exponentiation(^)\n");
            printf("7.exit\n");
            printf("enter your choice(1-7):");
            }
        
            double division(double a, double b){
                if (b == 0){
                    fprintf(stderr,"Invalid arguement for division\n");
                    return NAN;
                }
                else{
                    return a / b;
                }

            }
            int modulus(int a, int b){
                if(b == 0){
                    fprintf(stderr, "Invalid arguement for modulus");
                    return -1;
                }
                else{
                    return a % b;
                }

            }
        
        
        
        
        

            
 