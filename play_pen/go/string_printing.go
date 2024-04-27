package main

import (
	"fmt"
	"os"
)

func main() {
	fmt.Println("Some text")
	p := point{1, 2}

	fmt.Printf("struct2: %+v\n", p)


	fmt.Printf("struct3: %#v\n", p)

	fmt.Printf("pointer: %p\n", &p)

	fmt.Printf("width1: |%14d|%6d|\n", 12, 345)
	fmt.Printf("width1: |%14d|%6d|\n", 1333333333332, 345)

	fmt.Fprintf(os.Stderr, "io: an %s\n", "error")


}


type point struct {
	x, y int
}