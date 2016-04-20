(function($){
  "use strict";
    $(document).ready(function(){
      // parallax script
  //      var windowEl = $(window);
  // $('div[data-type="background"]').each(function(){
  //       var $bgobj = $(this); // assigning the object

  //       $(window).scroll(function() {
  //           var yPos = -(windowEl.scrollTop() / $bgobj.data('speed'));

  //           // Put together our final background position
  //           var coords = '50% '+ yPos + 'px';

  //           // Move the background
  //           $bgobj.css({ backgroundPosition: coords });
  //       });
  //   });
     //alert("hello");
      $(window).scroll(function(){
        if($(window).width() >= 1024){
         var h= $(".header-top").height();
        var st = $(this).scrollTop();
        if (st > h){
               $(".header-nav").css("position","fixed").css("top","0px");
            }
        else{
              $(".header-nav").css("position","relative");
        }
      }
      });
        $(".mobile").click(function(){
          var n=$("#block-nice-menus-1").css("display");
          if(n === 'none'){
           // alert(n);
            //$("#block-nice-menus-1").css("display","block !important");
            document.querySelector('style').textContent+="@media (max-width: 767px){.region-header > #block-nice-menus-1{ display:block !important}";
          }
          else{
          //alert(n);
          // alert("The paragraph was clicked.");
          // $("#block-nice-menus-1").removeClass("block");
            document.querySelector('style').textContent+="@media (max-width: 767px){.region-header > #block-nice-menus-1{ display:none !important}";
          }
        });
    });// your code
})(jQuery);



