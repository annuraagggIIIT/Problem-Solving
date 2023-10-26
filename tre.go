package main

import "fmt"

func printDiamond(n int) {
	// Upper part of the diamond
	for i := 1; i <= n; i += 2 {
		spaces := (n - i) / 2
		stars := i
		fmt.Printf("%s%s\n", repeatChar(' ', spaces), repeatChar('*', stars))
	}

	// Lower part of the diamond
	for i := n - 2; i >= 1; i -= 2 {
		spaces := (n - i) / 2
		stars := i
		fmt.Printf("%s%s\n", repeatChar(' ', spaces), repeatChar('*', stars))
	}
}

func repeatChar(char rune, count int) string {
	result := make([]rune, count)
	for i := range result {
		result[i] = char
	}
	return string(result)
}

func main() {
	// You can change the value of 'n' for a different size diamond
	printDiamond(5)
}
