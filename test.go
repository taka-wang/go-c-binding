package main

/*
#cgo LDFLAGS: -L. -ltest
#cgo CFLAGS: -I.
#include <test.h>
*/
import "C"
import (
	"fmt"
	"unsafe"
)

func a() {
	f := C.init()
	C.print(f)
	defer C.free(unsafe.Pointer(f))
	fmt.Println("done")
}

func b() {
	s := C.struct_some{a: 6, b: 7}
	C.print(&s)
	fmt.Println("done")
}

func main() {
	a()
	b()
}
