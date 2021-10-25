

# Statistical-Physics

# Accessible States for Boson Particles

Bosons: Particles with integer spin (s = 0, 1, 2, etc.). 

Main Question: How can we place N boson particle with total amount of energy β in γ enegy level with degeneracy g_i = α ?

Solution: We should calculate statistical weights with average particle number in each energy state.

Bosons are particles that follows **Bose-Einstein Statistics. 

We can calculate statistical weight of the system by following fuction according to Bose-Einstein Statistics.

**g_i** -> degeneracy number of energy states

**N_i** -> number of particles whics occupies specific energy level

<img src="http://latex.codecogs.com/svg.latex?\Omega_k(BE)&space;=&space;\prod_i&space;\frac{(g_i&space;&plus;&space;N_i-1)!}{N_i!&space;(g_i&space;-1)}&space;" title="http://latex.codecogs.com/svg.latex?\Omega_k(BE) = \prod_i \frac{(g_i + N_i-1)!}{N_i! (g_i -1)} " />

And the sum of the microscopic states will be

<img src="http://latex.codecogs.com/svg.latex?\Omega(BE)&space;=&space;\sum_k&space;\Omega_k&space;(BE)&space;" title="http://latex.codecogs.com/svg.latex?\Omega(BE) = \sum_k \Omega_k (BE) " />

Average number of particles in every energy level calculated by

<img src="http://latex.codecogs.com/svg.latex?\overline{n(BE)}&space;=&space;\frac{1}{\Omega(BE)}\sum_k&space;n_k&space;\Omega_k" title="http://latex.codecogs.com/svg.latex?\overline{n(BE)} = \frac{1}{\Omega(BE)}\sum_k n_k \Omega_k" />


And we can also compare this system with Maxwell-Boltzmann Statistics. Bosons follow or not?

We can calculate statistical weight of the system by following fuction according to Maxwell-Boltzmann Statistics.

 {% raw %}
  $$\Omega_k(MB) = N! \prod_i \frac{{g_i}^{N_i}}{N_i!}$$ --> note that all equations between these tags will not need escaping! 
 {% endraw %}


We need to generate particle distribution table. In order to calculate how many bosons occupy whics energy level, I have used some basic mathematical tricks.

1) Total number of particles in a row must be equal to total number of particles that we have entered.
2) <img src="http://latex.codecogs.com/svg.latex?\sum_{i=1}^{N}&space;a_n(n-1)&space;=\sum_{i=1}^{N}&space;a_n&space;=&space;E_{Total},&space;a_n&space;\in&space;\mathbb{N}" title="http://latex.codecogs.com/svg.latex?\sum_{i=1}^{N} a_n(n-1) =\sum_{i=1}^{N} a_n = E_{Total}, a_n \in \mathbb{N}" /> where a_n is the number of particles can occupy an energy level.

# Licence

***Released under licence: the GPL version 3 license.***

***Using without reference is, among other things, against the current license agreement (GPL).***

***Scientific or technical publications resulting from projects using this code are required to citate.***

# Usage 

You can enter defined total number of particles and proper amount of energy and degeneracy number.

Defined Total Number of Particles: 3,4,5,6,7,8,9,10

Total Number of Particles:

Total Amount of Energy:

Degeneracy number:













## Welcome to GitHub Pages

You can use the [editor on GitHub](https://github.com/kadirtastepe/Statistical-Physics/edit/gh-pages/index.md) to maintain and preview the content for your website in Markdown files.

Whenever you commit to this repository, GitHub Pages will run [Jekyll](https://jekyllrb.com/) to rebuild the pages in your site, from the content in your Markdown files.

### Markdown

Markdown is a lightweight and easy-to-use syntax for styling your writing. It includes conventions for

```markdown
Syntax highlighted code block

# Header 1
## Header 2
### Header 3

- Bulleted
- List

1. Numbered
2. List

**Bold** and _Italic_ and `Code` text

[Link](url) and ![Image](src)
```

For more details see [GitHub Flavored Markdown](https://guides.github.com/features/mastering-markdown/).

### Jekyll Themes

Your Pages site will use the layout and styles from the Jekyll theme you have selected in your [repository settings](https://github.com/kadirtastepe/Statistical-Physics/settings/pages). The name of this theme is saved in the Jekyll `_config.yml` configuration file.

### Support or Contact

Having trouble with Pages? Check out our [documentation](https://docs.github.com/categories/github-pages-basics/) or [contact support](https://support.github.com/contact) and we’ll help you sort it out.
