def check(num):
    ans=True
    i=2
    while i*i <= num:
        if(num%i==0):
            ans=False
            break
        i+=1
    return ans

count=2
print("私は今とてもパニック状態に陥ってる！！！！！\nこういうときは素数を数えて落ち着こう！！！")
while True:
    if check(count):
        input_text=input()
        output_text=str(count)
        if(input_text!=""):
            print("そう焦るでなぃっ.....!!!!!!!")
        print(output_text)
    count+=1
