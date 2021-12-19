#!/usr/bin/env python3
# Brainfuck to C parser
# a quick hack by sebin thomas
# feel free to poke around
# have not actually tested with anything 
# Usage . python braintoc.py "<brainfuck code>"
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
# CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
# SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
# INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
# CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
# ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE
import sys
import os
def parse(string):
 cprog=""" #include<stdio.h>
           int main()
           {
          
             static char a[30000], *ptr;
             ptr=a;   
        """
 #to initialize the brainf*** environment
 parsedic={">":"++ptr; ","<":"--ptr; ","+":"++(*ptr); ","-":"--(*ptr); ",".":"""printf("%c",(*ptr)); """,",":"""scanf("%c",ptr); ""","[":""" while(*ptr) { ""","]":" }"}
 for i in string:
  if i in parsedic:
    cprog=cprog+parsedic[i] 
 cprog=cprog+ " return 0; } "
 return cprog
 
# To compile the program and run it
def compileandrun(code):
  a=open("out.c",'w+')
  a.write(code)
  a.close()
  print ("compiling to c ... ")
  os.system("gcc out.c -o bf")
  print ("Output is as follows")
  os.system("./bf")

#main program
if __name__=="__main__":
  string=''.join(sys.argv[1:])
  op=parse(string)
  print (op)
  compileandrun(op)