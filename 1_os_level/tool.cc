#include <iostream>
#include <string>

std::string translate(int input, std::string variabele){ 
	std::string result = "";
	int tmp;
	input = input-((input/26)*26);
	for(unsigned int i; i<variabele.size(); i++){
		tmp = variabele[i];
		if((tmp>=65 && tmp<=90)||(tmp>=97 && tmp<=122)){
			tmp = variabele[i] + input;
			if((tmp<65 || tmp>90) && (tmp<97 || tmp>122)){
				tmp -=26;
			}
		}
		result += tmp;
	}
	return result; 
}


int main(int argc, char *argv[]){ 
	std::string s;
	int x=atoi(argv[1]);
	char *end;
	int correctInput = strtol(argv[1], &end, 10);
	if(argc != 2)
  	{ 
  		std::cerr << "Deze functie heeft exact 1 argument nodig";
    	return -1; 
	}
	if (*end != '\0') {
    std::cout << "Deze functie heeft een getal als argument nodig.\n";
    return -1;
	}
	while(true){ 
  		std::cin >> s;
    	if(std::cin.eof()){ 
    		return 0; 
    	}

    	std::cout << translate(x, s) << std::endl; 
	} 
}
