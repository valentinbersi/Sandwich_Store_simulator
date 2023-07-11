# Protein types
ROAST_BEEF = 'R'
TUNA = 'T'
SOY = 'S'
CHICKEN = 'C'
NO_PROTEIN = 'N'

# Protein prices
ROAST_BEEF_PRICE = 7
TUNA_PRICE = 9
CHICKEN_PRICE = 5
SOY_PRICE = 3
NO_PROTEIN_PRICE = 0

# Sandwich sizes
MIN_SANDWICH_SIZE = 15
MAX_SANDWICH_SIZE = 30

# Bread types
WHITE = 'W'
BROWN = 'B'
OATMEAL_AND_HONEY = 'O'
CHEESE_AND_OREGANO = 'C'

# Bread prices
BASIC_BREAD_PRICE = 5
SPECIAL_BREAD_PRICE = 8

# Cheese types
DAMBO = 'D'
CHEDDAR = 'C'
GRUYERE = 'G'
NO_CHEESE = 'N'

# Cheese prices
BASIC_CHEESE_PRICE = 5
SPECIAL_CHEESE_PRICE = 8
NO_CHEESE_PRICE = 0

YES = 'Y'
NO = 'N'

PRICE_PER_CENTIMETER_MULTIPLIER = 0.3

# Introducts the user to the program
def introduction():
    print("Hi! Welcome to Upway S.A., we'll soon take your order.")

# Returns True if sandwich_size >= MIN_SANDWICH_SIZE and sandwich_size <= MAX_SANDWICH_SIZE
def valid_sandwich_size(sandwich_size):
    return ( ( str(sandwich_size).isnumeric() ) and ( ( int(sandwich_size) >= MIN_SANDWICH_SIZE ) and ( int(sandwich_size) <= MAX_SANDWICH_SIZE ) ) )

# Returns the sandwich size with a value between MIN_SANDWICH_SIZE and MAX_SANDWICH_SIZE
def ask_sandwich_size():
    sandwich_size = input(f"What size do you want your sandwich? We sell sandwichies from {MIN_SANDWICH_SIZE} cm to {MAX_SANDWICH_SIZE} cm: ")
    
    while not valid_sandwich_size(sandwich_size):
        sandwich_size = input(f"No!, sandwich size must be between {MIN_SANDWICH_SIZE} cm and {MAX_SANDWICH_SIZE} cm!. Please type again, What size do you want your sandwich?: ")
        
    return int(sandwich_size)
        
# Return True if bread_type is one of the bread types (WHITE, BROWN, OATMEAL_AND_HONEY or CHEESE_AND_OREGANO)
def valid_bread_type(bread_type):
    return ( ( not str(bread_type).isnumeric() ) and ( ( bread_type.upper() == WHITE ) or ( bread_type.upper() == BROWN ) or ( bread_type.upper() == OATMEAL_AND_HONEY ) or ( bread_type.upper() == CHEESE_AND_OREGANO ) ) )

# Returns the bread_type with WHITE, BROWM, OATMEAL_AND_HONEY or CHEESE_AND_OREGANO
def ask_bread_type():
    bread_type = input(f"What type of bread do you want? White[{WHITE}], Brown[{BROWN}], Oatmeal and honey[{OATMEAL_AND_HONEY}] or Cheese and oregano[{CHEESE_AND_OREGANO}]: ")
    
    while not valid_bread_type(bread_type):
        bread_type = input(f"No!, bread options are: White[{WHITE}], Browm[{BROWM}], Oatmeal and honey[{OATMEAL_AND_HONEY}] or Cheese and oregano[{CHEESE_AND_OREGANO}]. Please type again, What type of bread do you want?: ")
        
    return bread_type.upper()

# Return True if cheese_type is one of the cheese types (DAMBO, CHEDDAR, GRUYERE or NO_CHEESE)
def valid_cheese_type(cheese_type):
    return ( ( not str(cheese_type).isnumeric() ) and ( ( cheese_type.upper() == DAMBO ) or ( cheese_type.upper() == CHEDDAR ) or ( cheese_type.upper() == GRUYERE ) or ( cheese_type.upper() == NO_CHEESE ) ) )

# Returns cheese_type with DAMBO, CHEEDAR, GRUYERE or NO_CHEESE
def ask_cheese_type():
    cheese_type = input(f"What type of cheese do you want? Dambo[{DAMBO}], Cheddar[{CHEDDAR}], Gruyere[{GRUYERE}] or No cheese[{NO_CHEESE}]: ")
    
    while not valid_cheese_type(cheese_type):
        cheese_type = input(f"No!, cheese options are: Dambo[{DAMBO}], Cheddar[{CHEDDAR}], Gruyere[{GRUYERE}] or No cheese[{NO_CHEESE}]. Please type again, What type of cheese do you want?: ")
        
    return cheese_type.upper()

# Return true if protein_type is one of the protein types (ROAST_BEEF, TUNA, SOY, CHICKEN or NO_PROTEIN)
def valid_protein_type(protein_type):
    return ( ( not str(protein_type).isnumeric() ) and ( ( protein_type.upper() == ROAST_BEEF ) or ( protein_type.upper() == TUNA ) or ( protein_type.upper() == SOY ) or ( protein_type.upper() == CHICKEN ) or ( protein_type.upper() == NO_PROTEIN ) ) )

# Returns protein_type with ROAST_BEEF, TUNA, SOY, CHICKEN or NO_PROTEIN
def ask_protein_type():
    protein_type = input(f"What type of protein do you want? Roast beef[{ROAST_BEEF}], Tuna[{TUNA}], Soy[{SOY}], Chicken[{CHICKEN}] or No protein[{NO_PROTEIN}]: ")
    
    while not valid_protein_type(protein_type):
        protein_type = input(f"No!, protein options are: Roast beef[{ROAST_BEEF}], Tuna[{TUNA}], Soy[{SOY}], Chicken[{CHICKEN}] or No protein[{NO_PROTEIN}]. Please type again, What type of protein do you want?: ")
        
    return protein_type.upper()

# Return true if heat_sandwich is YES or NO
def valid_heat_sandwich(heat_sandwich):
    return ( ( not str(heat_sandwich).isnumeric() ) and ( ( heat_sandwich.upper() == YES ) or ( heat_sandwich.upper() == NO ) ) )

# Returns heat_sandwich with YES or NO
def ask_heat_sandwich():
    heat_sandwich = input(f"Do you want us to heat your sandwich? Yes[{YES}] or No[{NO}]: ")
    
    while not valid_heat_sandwich(heat_sandwich):
        heat_sandwich = input(f"It's a yes or no question... Please type again, Do you want us to heat your sandwich? Yes[{YES}] or No[{NO}]: ")
        
    return heat_sandwich.upper()

# Returns the bread price
def calculate_bread_price(bread_type):
    if bread_type == WHITE or bread_type == BROWN:
        bread_price = BASIC_BREAD_PRICE
    else:
        bread_price = SPECIAL_BREAD_PRICE
        
    return bread_price

# Returns the cheese price
def calculate_cheese_price(cheese_type):
    if cheese_type == DAMBO or cheese_type == CHEDDAR:
        cheese_price = BASIC_CHEESE_PRICE
    elif cheese_type == GRUYERE:
        cheese_price = SPECIAL_CHEESE_PRICE
    else:
        cheese_price = NO_CHEESE_PRICE
        
    return cheese_price

# Returns the protein price
def calculate_protein_price(protein_type):
    if protein_type == ROAST_BEEF:
        protein_price = ROAST_BEEF_PRICE
    elif protein_type == TUNA:
        protein_price = TUNA_PRICE
    elif protein_type == CHICKEN:
        protein_price = CHICKEN_PRICE
    elif protein_type == SOY:
        protein_price = SOY_PRICE
    else:
        protein_price = NO_PROTEIN
        
    return protein_price

# Returns valid values for the sandwich components
def take_order():
    
    sandwich_size = ask_sandwich_size()
    
    bread_type = ask_bread_type()
    
    cheese_type = ask_cheese_type()
    
    protein_type = ask_protein_type()
    
    if protein_type != TUNA:
        return sandwich_size, bread_type, cheese_type, protein_type, ask_heat_sandwich()
    else:
        return sandwich_size, bread_type, cheese_type, protein_type, ""
    
# Returns the final price of the sandwich
def calculate_final_price(sandwich_size, bread_price, cheese_price, protein_price):
    return int( ( bread_price + cheese_price + protein_price ) * sandwich_size * PRICE_PER_CENTIMETER_MULTIPLIER )

# Prints the sandwich price
def print_sandwich_price(final_price):
    print(f"Your sandwich's final price is: -{final_price}-")
    
def main():
    introduction()
    
    sandwich_size, bread_type, cheese_type, protein_type, heat_sandwich = take_order()
    
    bread_price = calculate_bread_price(bread_type)
    
    cheese_price = calculate_cheese_price(cheese_type)
    
    protein_price = calculate_protein_price(protein_type)
    
    final_price = calculate_final_price(sandwich_size, bread_price, cheese_price, protein_price)
    
    print_sandwich_price(final_price)
    
if __name__ == "__main__":
    main()
