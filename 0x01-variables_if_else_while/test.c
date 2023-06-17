#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char filename1[100], filename2[100];
	FILE *file1, *file2;
	char str1[1000], str2[1000];
	int diff = 0, line_number = 1;

	printf("Enter the filename for the first string: ");
	scanf("%s", filename1);

	printf("Enter the filename for the second string: ");
	scanf("%s", filename2);

	// Open the files for reading
	file1 = fopen(filename1, "r");
	file2 = fopen(filename2, "r");

	if (file1 == NULL || file2 == NULL) {
		printf("Error opening the files.\n");
		return 1;
	}

	// Read the strings from the files
	fgets(str1, sizeof(str1), file1);
	fgets(str2, sizeof(str2), file2);

	// Remove newline character from input strings
	str1[strcspn(str1, "\n")] = '\0';
	str2[strcspn(str2, "\n")] = '\0';

	// Find the difference between the strings and print the line numbers
	printf("Line numbers where the strings differ:\n");
	while (!feof(file1) || !feof(file2)) {
		if (strcmp(str1, str2) != 0) {
			printf("Line %d\n", line_number);
			diff++;
		}
		line_number++;
		fgets(str1, sizeof(str1), file1);
		fgets(str2, sizeof(str2), file2);
		str1[strcspn(str1, "\n")] = '\0';
		str2[strcspn(str2, "\n")] = '\0';
	}

	printf("Difference between the strings: %d\n", diff);

	// Close the files
	fclose(file1);
	fclose(file2);

	return 0;
}
