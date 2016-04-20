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

          //$("#block-nice-menus-1").css("display","block !important");
          document.querySelector('style').textContent+="@media (max-width: 767px){.region-header > #block-nice-menus-1{ display:block !important}";
        }
        else{
              document.querySelector('style').textContent+="@media (max-width: 767px){.region-header > #block-nice-menus-1{ display:none !important}";
        }
      });
      $('.block-block-2 p').click(function(){
        if($("#block-search-form").hasClass('active')){
          $("#block-search-form").removeClass('active');

        // $("#block-search-form").animate({width:'toggle'},400);
        // $(".form-type-textfield").toggle(500);
        }
        else{
          $("#block-search-form").addClass('active');
        }
      });
  });// your code
})(jQuery);



