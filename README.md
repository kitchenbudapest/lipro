LIPRO
=====

- [Abstract](#abstract)
- [Current Status](#current-status)
- [Assemble Parts](#assemble-parts)
- [Example Build](#example-build)
- [License](#license)

![parts](img/joint.010.2.preview.png?raw=true "parts")



Abstract
--------

Lipro (Libre Prototyping) is a free and open source constructing toy, designed
for hardware prototyping, but it can also be used as a universal construction
kit. It has several advantages over the currently existing alternatives (eg.
Lego Technic, Tetrix, Makeblock, etc.):

1. **It is free and it always will be!** The purpose of Lipro is to make
   hardware prototyping accesible to everyone, and the best way of doing so is
   to making it available without any charge. Download and test it now!

2. **It is open source!** Are you a hacker? A maker? A true tinkerer? Then you
   want to modify things to suit your needs, don't you? Thankfully everything
   about lipro is available for you since day one. Hack it, enhance it and don't
   forget to share it!

3. **It is parametric!** All parts are generated from code, so they can be
   reparameterised, to suit the different needs of different users. For example,
   lipro can be easily generated for both metric and imperial users; or it can
   be magnified easily to test and get traction of a prototype at a larger
   scale.

4. **It is printable!** All parts can be produced on any
   [FFF](http://reprap.org/wiki/Fused_filament_fabrication) printers easily,
   as all of them are support free and can be as small as the
   smallest printer's capacity is.

5. **Widely available externals!** There is no special bits needed, all the
   screws, nuts, bolts, bearings and tubes can be foud in any decent hardware
   stores nearby.

6. **Easy to build!** Lipro only requires a single screwdriver. How cool is
   that?



Current Status
--------------

Currently lipro is in its infantry. The main connector types have been invented,
and tested thoroughly. Initial prototypes has been built. However the parts are
'hard-baked' ones, meaning, they are modeled manually and not generated from
code. The next step would be to decide wether the project should built on top of
[FreeCAD](http://www.freecadweb.org)'s Python API, or should it implement its
own library in [OpenSCAD](http://www.openscad.org).

After that, new parts, like gears, mounts and handles should be designed, tested
and coded next.



Assemble Parts
--------------

All parts can be assembled with a single screwdriver. The current statically
sized models require M3x10 and M3x16 screws, and their M3 nut counterparts. Here
is the quick assembly of a joint from scratch:

![fig1](img/fig1.gif?raw=true "fig1")
![fig2](img/fig2.gif?raw=true "fig2")
![fig3](img/fig3.gif?raw=true "fig3")
![fig4](img/fig4.gif?raw=true "fig4")
![fig5](img/fig5.gif?raw=true "fig5")



Example Build
-------------

This is the first version, of a 2D plotter machine, to demonstrate the
capabilities of lipro's rapid prototyping. Since the project is in very early
stage, 3 special components were designed to support this particular machine,
and are not as compatible with all the other parts of lipro as the other bits
are. (The middle block, the pen holder and the motor mount.)

![sample](img/sample.gif?raw=true "sample")



License
-------

*All source codes of this project are licensed:*

Copyright &copy; 2016 **Peter Varo, Kitchen Budapest**

This program is free software: you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation, either version 3 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program, most likely a file in the root directory, called 'LICENSE'.
If not, see <http://www.gnu.org/licenses>.

- - -

*All 3D models, images, videos and other media types are licensed:*

Copyright &copy; 2016 **Peter Varo, Kitchen Budapest**

This work is licensed under a Creative Commons Attribution-ShareAlike 4.0
International License.

> This is a human-readable summary of (and not a substitute for) the
> [license](https://creativecommons.org/licenses/by-sa/4.0/legalcode).

**You are free to:**

- **Share** -- copy and redistribute the material in any medium or format
- **Adapt** -- remix, transform, and build upon the material for any purpose,
  even commercially.

The licensor cannot revoke these freedoms as long as you follow the license
terms.

**Under the following terms:**

- **Attribution** -- You must give appropriate credit, provide a link to the
  license, and indicate if changes were made. You may do so in any reasonable
  manner, but not in any way that suggests the licensor endorses you or your
  use.

- **ShareAlike** -- If you remix, transform, or build upon the material, you
  must distribute your contributions under the same license as the original.

No additional restrictions -- You may not apply legal terms or technological
measures that legally restrict others from doing anything the license permits.
