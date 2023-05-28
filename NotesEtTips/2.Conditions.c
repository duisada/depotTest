//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /* CONDITIONS */

    1/IF, ELSE IF, ELSE 
    2/SWITCH
    3/TERNARY

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




    1/IF, ELSE IF, ELSE 
    /////////////////// 
    

    int age = 10                                                                                                                                                                                                                           
                                                                           
    if (age < 1)                                                                                                                    
    {
        printf("Tu es un bébé\n");
    }
    else if (age == 10)                      | else if (age >= 1 && age <= 100)
    {                                        | {   
        printf("tu as 10 ans !\n");          |      printf("Tu as un age compris entre 1 et 100 ans\n");
    }                                    ou  | }
    else                                     | else
    {                                        | {
        printf("Age : %d\n", age);           |      printf("Wahh, tu as plus de 100 ans !!!\n");
    }                                        | }
    
    

    return 0; 
    / Un seul if, un seul else, et entre les deux un ou plusieurs else if



/////////////////////////////////////////////////////////////////////////////////////


    2/SWITCH [Valable uniquement pour les chiffres]
    //////// 

    
    int age = 375;

    switch(age)
    {
        case 0:
            printf("Tu as 0 an\n");
            break

        case 15:
        printf("Tu as 15 ans\n");

        default:
            printf("Tu n'as ni 0 an, ni 15 ans\n", );
            break;

    }

    return 0;



/////////////////////////////////////////////////////////////////////////////////////


    3/TERNARY
    /////////


    int age = 15;

    (age == 15) ? printf("Tu as 15 ans.\n") : printf("Tu n'as pas 15 ans.\n");

    return 0;

