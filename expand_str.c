#include <unistd.h>

int ft_strlen(char *str) {
    int i = 0;
    while (str[i])
        i++;
    return i;
}

void expand_str(char *str) {
    int i = 0;
	int len = ft_strlen(str);
	len--;
	while (str[i] == ' ' || str[i] == '\t' || (str[i] >= 9 && str[i] <= 13) && str[i])
		i++;
	if (str[len] == ' ' || str[len] == '\t' || (str[len] >= 9 && str[len] <= 13) && str[len])
		len--;	
    while (str[i] && i <= len) {
		int space = 0;
        while (str[i] != ' ' && str[i] != '\t' && !(str[i] >= 9 && str[i] <= 13) && str[i]) {
            write(1, &str[i], 1);
            i++;
        }
        while (str[i] == ' ' || str[i] == '\t' || (str[i] >= 9 && str[i] <= 13) && str[i]) {
            i++;
			space++;
        }
		if (space > 0 && i < len)
		{
			write(1, &"   ", 3);
		}
    }
}

int main(int argc, char *argv[]) {
    if (argc == 2) {
        expand_str(argv[1]);
    }
    write(1, &"\n", 1);
    return 0;
}


