import numpy as np
from matplotlib import plot as plt

x = np.loadtext("random.dat")
plt.hist(x,bins = 100)
plt.show()

