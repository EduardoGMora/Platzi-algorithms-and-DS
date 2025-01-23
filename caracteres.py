def StringReverse( string ):
    return string if string == "" else StringReverse( string[1:] ) + string[0]
    
if __name__ == "__main__":
    print( StringReverse( "Hello World!!" ) )