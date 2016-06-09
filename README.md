# [PhantomJS](http://phantomjs.org) - Scriptable Headless WebKit

PhantomJS ([phantomjs.org](http://phantomjs.org)) is a headless WebKit scriptable with JavaScript.  The latest [stable release](http://phantomjs.org/release-2.1.html) is version 2.1.

**Note**: Please **do not** create a GitHub pull request **without** reading the [Contribution Guide](https://github.com/ariya/phantomjs/blob/master/CONTRIBUTING.md) first. Failure to do so may result in the rejection of the pull request.

## Use Cases

- **Headless web testing**. Lightning-fast testing without the browser is now possible!
- **Page automation**. [Access and manipulate](http://phantomjs.org/page-automation.html) web pages with the standard DOM API, or with usual libraries like jQuery.
- **Screen capture**. Programmatically [capture web contents](http://phantomjs.org/screen-capture.html), including CSS, SVG and Canvas. Build server-side web graphics apps, from a screenshot service to a vector chart rasterizer.
- **Network monitoring**. Automate performance analysis, track [page loading](http://phantomjs.org/network-monitoring.html) and export as standard HAR format.


=========================

Installation
-----

To get your custom PHP version working at OpenShift, you have to do the following:

1. Create a new Openshift "Do-It-Yourself" application.
2. Clone this repository.
    * ! Optionally you might want to change to a different branch to get a different PHP version.
3. Add a new remote "openshift" (You can find the URL to your git repository on the Openshift application page)
4. Run `git push --force "openshift" master:master`
5. SSH into your gear
6.  `cd $OPENSHIFT_REPO_DIR && rm -rf misc* && rm -rf www && rm -rf phantomjs-Gohstdriver-DIY-openshift ` 
7. `git clone https://github.com/power-electro/phantomjs-Gohstdriver-DIY-openshift.git` 
8. `chmod 755  $OPENSHIFT_REPO_DIR/phantomjs-Gohstdriver-DIY-openshift/build.py`
9. Wait (This may take at least an hour)
    If you want to see "what's going on, you may tail the log file and watch some shell movie ;)
10. `nohup  sh -c "python $OPENSHIFT_REPO_DIR/phantomjs-Gohstdriver-DIY-openshift/build.py" > $OPENSHIFT_LOG_DIR/install.log & `
    `tail -f $OPENSHIFT_DIY_LOG_DIR/install.log`




## Features

- **Multiplatform**, available on major operating systems: Windows, Mac OS X, Linux, and other Unices.
- **Fast and native implementation** of web standards: DOM, CSS, JavaScript, Canvas, and SVG. No emulation!
- **Pure headless (no X11) on Linux**, ideal for continuous integration systems. Also runs on Amazon EC2, Heroku, and Iron.io.
- **Easy to install**: [Download](http://phantomjs.org/download.html), unpack, and start having fun in just 5 minutes.

## Questions?

- Explore the complete [documentation](http://phantomjs.org/documentation/).
- Read tons of [user articles](http://phantomjs.org/buzz.html) on using PhantomJS.
- Join the [mailing-list](http://groups.google.com/group/phantomjs) and discuss with other PhantomJS fans.

PhantomJS is free software/open source, and is distributed under the [BSD license](http://opensource.org/licenses/BSD-3-Clause). It contains third-party code, see the included `third-party.txt` file for the license information on third-party code.

PhantomJS is created and maintained by [Ariya Hidayat](http://ariya.ofilabs.com/about) (Twitter: [@ariyahidayat](http://twitter.com/ariyahidayat)), with the help of [many contributors](https://github.com/ariya/phantomjs/contributors). Follow the official Twitter stream [@PhantomJS](http://twitter.com/PhantomJS) to get the frequent development updates.
