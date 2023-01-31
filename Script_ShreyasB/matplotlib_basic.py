#import a few packages

import numpy as np
import matplotlib as mpl
import matplotlib.pyplot as plt


# Generate two normal distribution
dist1=np.random.normal(0.1,0.6,10000)
dist2=np.random.normal(0.9,0.9,10000)

fig, ax = plt.subplots()
ax.hist(dist1, bins=50, lw=2, alpha=0.5,label='dist1')
ax.hist(dist2, bins=50, lw=2, alpha=0.5,label='dist2')
ax.set_xlabel('dist')
ax.set_ylabel('counts')
ax.legend(loc=0)
ax.set_title('Matplotlib basic Normal Scale')
plt.show()
plt.savefig('guassian.png')









