from tkinter import *
from tkinter import messagebox

def reset_entry():
    height_tf.delete(0,'end')
    weight_tf.delete(0,'end')

def calculate_BMI():
    kg = int(weight_tf.get())
    m = int(height_tf.get())/100
    BMI = kg/(m*m)
    BMI = round(BMI, 1)
    BMI_index(BMI)

def BMI_index(BMI):
    
    if BMI < 18.5:
        messagebox.showinfo('BMI Calculator', f'BMI = {BMI} is Underweight')
    elif (BMI > 18.5) and (BMI < 24.9):
        messagebox.showinfo('BMI Calculator', f'BMI = {BMI} is Normal')
    elif (BMI > 24.9) and (BMI < 29.9):
        messagebox.showinfo('BMI Calculator', f'BMI = {BMI} is Overweight')
    elif (BMI > 29.9):
        messagebox.showinfo('BMI Calculator', f'BMI = {BMI} is Obesity') 
    else:
        messagebox.showerror('BMI Calculator', 'Something went wrong')   
ws = Tk()
ws.title('BMI Calculator')
ws.geometry('300x300')
ws.config(bg='#686e70')

var = IntVar()

frame = Frame(ws,padx=10, pady=10)
frame.pack(expand=True)

height_lb = Label(frame,text="Enter Height (in cm)  ")
height_lb.grid(row=3, column=1)

weight_lb = Label(frame,text="Enter Weight (in kg)",)
weight_lb.grid(row=4, column=1)

height_tf = Entry(frame)
height_tf.grid(row=3, column=2, pady=5)

weight_tf = Entry(frame)
weight_tf.grid(row=4, column=2, pady=5)

frame3 = Frame(frame)
frame3.grid(row=5, columnspan=3, pady=10)

cal_btn = Button(frame3,text='Calculate',bg="red",command=calculate_BMI)
cal_btn.pack(side=LEFT)

reset_btn = Button(frame3,text='Reset',bg="red",command=reset_entry)
reset_btn.pack(side=LEFT)

exit_btn = Button(frame3,text='Exit',bg="red",command=lambda:ws.destroy())
exit_btn.pack(side=RIGHT)

ws.mainloop()