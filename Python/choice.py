"""Program to choose between multiple options."""

from random import choice

def choose(choices:str):
      print(choices.replace(" ",''))
      choices = [(c) for c in choices.replace(" ",'')]
      if len(choices) < 2:
            print("Not enough options to pick from.")
      else:
            print(f' 🤔 | My choice is `{choice(choices)}`')
        
choice1 = input("Enter the options: ")
choose(choice1)
