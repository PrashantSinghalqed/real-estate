;(function($){
  "use strict";
    $(document).ready(function(){

  // alert("hello");
    $(window).scroll(function(){
      if($(window).width() >= 1024){
       var h= $(".header-top").height();
      var st = $(this).scrollTop();
      if (st > h){
             $(".header-nav").css("position","fixed").css("top","0px");
          }
      else{
            $(".header-nav").css("position","relative").css("top","0px");
      }
    }
    });
});// your code
})(jQuery);



