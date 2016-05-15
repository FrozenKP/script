package main

import"os/exec"
import"os"
import"fmt"

func add(file string){
    cmd:=exec.Command("git","add",file)
    cmd.Run()
    fmt.Println("add fin")
}

func commit(com string){
    cmd:=exec.Command("git","commit","-m",com)
    cmd.Run()
    fmt.Println("commit fin")
}

func push(){
    cmd:=exec.Command("git","push")
    cmd.Run()
}

func main(){
    add(os.Args[1])
    commit(os.Args[2])
    push()
}
