import matplotlib.pyplot as plt
import random

fig, ax = plt.subplots(1, 1)

ax.set_ylim((0, 100))
y = [random.randint(1,100) for i in range(100)]
x=range(len(y))
plt.pause(10)
while True:
    end=True
    for i in range(len(y)-1):
        if y[i]>y[i+1]:
            y[i],y[i+1]=y[i+1],y[i]
            end=False
    line = ax.bar(x, y,color="blue")
    if end:
        break
    plt.pause(0.5)
    line.remove()
plt.pause(10000)