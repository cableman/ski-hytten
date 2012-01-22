Summary
-------
This module allows for your Drupal site to connect to http://yr.no and gather weather forecast data to display in a page view and one or several blocks on your site.


Theming
-------
Theming can be done via CSS and/or using Drupal's theme hooks. See the yr_verdata.module file for documentation on the theme hooks that are available.
You can use custom symbols for weather and wind if want to. Note that the implementations in this module are actually theme functions, so you could alter these entirely to fit your own needs through theme hooks.


Configuration and usage
-----------------------
* Configure the module at 'admin/config/services/yr_verdata'.
* Add locations at 'forecast/add'.
* Delete locations from the table at 'forecast'.
* A list of locations can be seen at 'forecast', and in a block (or several blocks if you activate the multiblock feature at 'admin/config/services/yr_verdata') which is available at admin/build/blocks.


Requirements
------------
PHP 5 and cURL for all branches.


Author
------
Fredrik Kilander (tjodolv, http://drupal.org/user/196733/contact)


Legal
-----
All forecast data are collected from http://yr.no, which is operated by the Norwegian Meteorological Institute and Norwegian Broadcasting Corporation. All data is free as in free beer, as long as a link back to http://yr.no is provided.
See http://www.yr.no/english/1.2025949.