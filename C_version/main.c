#include <stdio.h>
#include <stdbool.h>

// Protein types
#define ROAST_BEEF 'R'
#define TUNA 'T'
#define SOY 'S'
#define CHICKEN 'C'
#define NO_PROTEIN 'N'

// Protein princes
const int ROAST_BEEF_PRICE = 7;
const int TUNA_PRICE = 9;
const int CHICKEN_PRICE = 5;
const int SOY_PRICE = 3;
const int NO_PROTEIN_PRICE = 0;

// Sandwich sizes
const int MIN_SANDWICH_SIZE = 15;
const int MAX_SANDWICH_SIZE = 30;

// Bread types
const char WHITE = 'W';
const char WHOLEMEAL = 'H';
const char OATMEAL_AND_HONEY = 'O';
const char CHEESE_AND_OREGANO = 'C';

// Bread prices
const int BASIC_BREAD_PRICE = 5;
const int SPECIAL_BREAD_PRICE = 8;

// Cheese types
const char DAMBO = 'D';
const char CHEDDAR = 'C';
const char GRUYERE = 'G';
const char NO_CHEESE = 'N';

// Cheese prices
const int BASIC_CHEESE_PRICE = 5;
const int SPECIAL_CHEESE_PRICE = 8;
const int NO_CHEESE_PRICE = 0;

const char YES = 'Y';
const char NO = 'N';

const float PRICE_PER_CENTIMETER_MULTIPLIER = 0.3f;

// Introducts the user to the program
void introduction(){
    printf("Hi! Welcome to Upway S.A., we'll soon take your order.\n");
}

// Returns true if sandwich_size > MIN_SANDWICH_SIZE or sandwich_size < MAX_SANDWICH_SIZE
bool valid_sandwich_size(int sandwich_size){
    return ( ( sandwich_size >= MIN_SANDWICH_SIZE ) && ( sandwich_size <= MAX_SANDWICH_SIZE ) );
}

// Loads sandwich_size with a value between MIN_SANDWICH_SIZE and MAX_SANDWICH_SIZE
void ask_sandwich_size(int* sandwich_size){
    printf("What size do you want your sandwich? We sell sandwichies from %i cm to %i cm: ", MIN_SANDWICH_SIZE, MAX_SANDWICH_SIZE);
    scanf("%i", sandwich_size);

    while( !valid_sandwich_size(*sandwich_size) ){
        printf("No!, sandwich size must be between %i cm and %i cm!. Please type again, What size do you want your sandwich?: ",MIN_SANDWICH_SIZE, MAX_SANDWICH_SIZE);
        scanf("%i", sandwich_size);
    }
}

// Return true if bread_type is one of the bread types (WHITE, WHOLEMEAL, OATMEAL_AND_HONEY or CHEESE_AND_OREGANO)
bool valid_bread_type(char bread_type){
    return ( ( bread_type == WHITE ) || ( bread_type == WHOLEMEAL ) || ( bread_type == OATMEAL_AND_HONEY ) || ( bread_type == CHEESE_AND_OREGANO ) );
}

// Loads bread_type with WHITE, WHOLEMEAL, OATMEAL_AND_HONEY or CHEESE_AND_OREGANO
void ask_bread_type(char* bread_type){
    printf("What type of bread do you want? White[%c], Wholemeal[%c], Oatmeal and honey[%c] or Cheese and oregano[%c] (type your option in a capital letter please): ", WHITE, WHOLEMEAL, OATMEAL_AND_HONEY, CHEESE_AND_OREGANO);
    scanf(" %c", bread_type);

    while( !valid_bread_type(*bread_type) ){
        printf("No!, bread options are: White[%c], Wholemeal[%c], Oatmeal and honey[%c] or Cheese and oregano[%c]. Please type again, What type of bread do you want? (type your option in a capital letter please): ", WHITE, WHOLEMEAL, OATMEAL_AND_HONEY, CHEESE_AND_OREGANO);
        scanf(" %c", bread_type);
    }
}

// Return true if cheese_type is one of the bread types (DAMBO, CHEDDAR, GRUYERE or NO_CHEESE)
bool valid_cheese_type(char cheese_type){
    return ( ( cheese_type == DAMBO ) || ( cheese_type == CHEDDAR ) || ( cheese_type == GRUYERE ) || ( cheese_type == NO_CHEESE ) );
}

// Loads cheese_type with DAMBO, CHEEDAR, GRUYERE or NO_CHEESE
void ask_cheese_type(char* cheese_type){
    printf("What type of cheese do you want? Dambo[%c], Cheddar[%c], Gruyere[%c] or No cheese[%c] (type your option in a capital letter please): ", DAMBO, CHEDDAR, GRUYERE, NO_CHEESE);
    scanf(" %c", cheese_type);

    while( !valid_cheese_type(*cheese_type) ){
        printf("No!, cheese options are: Dambo[%c], Cheddar[%c], Gruyere[%c] or No cheese[%c]. Please type again, What type of cheese do you want? (type your option in a capital letter please): ", DAMBO, CHEDDAR, GRUYERE, NO_CHEESE);
        scanf(" %c", cheese_type);
    }
}

// Return true if protein_type is one of the protein types (ROAST_BEEF, TUNA, SOY, CHICKEN or NO_PROTEIN)
bool valid_protein_type(char protein_type){
    return ( ( protein_type == ROAST_BEEF ) || ( protein_type == TUNA ) || ( protein_type == SOY ) || ( protein_type == CHICKEN ) || ( protein_type == NO_PROTEIN ) );
}

// Loads protein_type with ROAST_BEEF, TUNA, SOY, CHICKEN or NO_PROTEIN
void ask_protein_type(char* protein_type){
    printf("What type of protein do you want? Roast beef[%c], Tuna[%c], Soy[%c], Chicken[%c] or No protein[%c] (type your option in a capital letter please): ", ROAST_BEEF, TUNA, SOY, CHICKEN, NO_PROTEIN);
    scanf(" %c", protein_type);

    while( !valid_protein_type(*protein_type) ){
        printf("No!, protein options are: Roast beef[%c], Tuna[%c], Soy[%c], Chicken[%c] or No protein[%c]. Please type again, What type of protein do you want? (type your option in a capital letter please): ", ROAST_BEEF, TUNA, SOY, CHICKEN, NO_PROTEIN);
        scanf(" %c", protein_type);
    }
}

// Return true if heat_sandwich is YES or NO
bool valid_hot_or_cold(char heat_sandwich){
    return ( ( heat_sandwich == YES ) || ( heat_sandwich == NO ) );
}

// Loads hot_or_cold with YES or NO
void ask_heat_sandwich(char* heat_sandwich){
    printf("Do you want us to heat your sandwich? Yes[%c] or No[%c] (type your option in a capital letter please): ", YES, NO);
    scanf(" %c", heat_sandwich);

    while( !valid_hot_or_cold(*heat_sandwich) ){
        printf("It's a yes or no question... Please type again, Do you want us to heat your sandwich? Yes[%c] or No[%c] (type your option in a capital letter please): ",YES, NO);
        scanf(" %c", heat_sandwich);
    }
}

// Returns the bread price
int calculate_bread_price(char bread_type){

    int bread_price = 0;

    if( ( bread_type == WHITE ) || ( bread_type == WHOLEMEAL ) ){
        bread_price = BASIC_BREAD_PRICE;
    }
    else{
        bread_price = SPECIAL_BREAD_PRICE;
    }

    return bread_price;

}

// Returns the cheese price
int calculate_cheese_price(char cheese_type){

    int cheese_price = 0;

    if( (cheese_type == DAMBO) || (cheese_type == CHEDDAR) ){
        cheese_price = BASIC_CHEESE_PRICE;
    }
    else if( (cheese_type == GRUYERE) ){
        cheese_price = SPECIAL_CHEESE_PRICE;
    }
    else{
        cheese_price = NO_CHEESE_PRICE;
    }

    return cheese_price;

}

// Returns the protein price
int calculate_protein_price(char protein_type){

    int protein_price = 0;

    switch(protein_type){
        case ROAST_BEEF:
            protein_price = ROAST_BEEF_PRICE;
            break;

        case TUNA:
            protein_price = TUNA_PRICE;
            break;

        case CHICKEN:
            protein_price = CHICKEN;
            break;
            
        case SOY:
            protein_price = SOY_PRICE;
            break;

        case NO_PROTEIN:
            protein_price = NO_PROTEIN_PRICE;
            break;
    }

    return protein_price;

}

// Loads the variables with valid values
void take_order(int* sandwich_size, char* bread_type, char* cheese_type, char* protein_type, char* heat_sandwich){

    ask_sandwich_size(sandwich_size);

    ask_bread_type(bread_type);

    ask_cheese_type(cheese_type);

    ask_protein_type(protein_type);

    if(*protein_type != TUNA){
        ask_heat_sandwich(heat_sandwich);
    }
}

// Returns the final price of the sandwich
int calculate_final_price(int sandwich_size, int bread_price, int cheese_price, int protein_price){
    return ( (int)( (float)( bread_price + cheese_price + protein_price ) * (float)sandwich_size * PRICE_PER_CENTIMETER_MULTIPLIER ) );
}

// Prints the sandwich price
void print_sandwich_price(int final_price){
    printf("Your sandwich's final price is: -%i-\n", final_price);
}

int main(){

    int sandwich_size = 0, bread_price = 0, cheese_price = 0, protein_price = 0, final_price = 0;
    char bread_type = ' ', cheese_type = ' ', protein_type = ' ', heat_sandwich = ' ';

    introduction();

    take_order(&sandwich_size, &bread_type, &cheese_type, &protein_type, &heat_sandwich);

    bread_price = calculate_bread_price(bread_type);

    cheese_price = calculate_cheese_price(cheese_type);

    protein_price = calculate_protein_price(protein_type);

    final_price = calculate_final_price(sandwich_size, bread_price, cheese_price, protein_price);

    print_sandwich_price(final_price);

    return 0;
}
