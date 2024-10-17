import tkinter as tk

def perform_operation():
    try:
        num1 = float(entry_num1.get())
        num2=float(entry_num2.get())
        operator=operation_var.get()

        if operator=="+":
            result.set(num1+num2)
        elif operator =="-":
            result.set(num1-num2)
        elif operator=="*":
            result.set(num1*num2)
        elif operator=="/":
            if num2==0:
                result.set("Error:division by zero ")
            else:
                result.set(num1/num2)
    except ValueError:
        result.set("error:invalid input")
root=tk.Tk()
root.title("arthmeatic operations")
entry_num1=tk.Entry(root,width=10)
entry_num2=tk.Entry(root,width=10)
result=tk.StringVar()
result_label=tk.Label(root,textvariable=result)

operations=["+","-","*","/"]
operation_var=tk.StringVar()
operation_var.set("+")
operation_menu=tk.OptionMenu(root,operation_var,*operations)
calculate_button=tk.Button(root,text="calculate",command=perform_operation)
entry_num1.grid(row=0,column=0)
operation_menu.grid(row=0,column=1)
entry_num2.grid(row=0,column=2)
calculate_button.grid(row=1,column=0,columnspan=3)
result_label.grid(row=2,column=0,columnspan=3)
root.mainloop()

