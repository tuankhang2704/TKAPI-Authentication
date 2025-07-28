<div class="application-main " data-commit-hovercards-enabled="" data-discussion-hovercards-enabled="" data-issue-and-pr-hovercards-enabled="" data-project-hovercards-enabled="">
        <div itemscope="" itemtype="http://schema.org/SoftwareSourceCode" class="">
    <main id="js-repo-pjax-container">
      
  


<template class="js-user-list-create-dialog-template" data-label="Create list">
  <div class="Box-header">
    <h2 class="Box-title">Create list</h2>
  </div>
  <!-- '"` --><!-- </textarea></xmp> --><form class="Box-body d-flex flex-column p-3 js-user-list-form" data-turbo="false" action="/stars/tuankhang2704/lists" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="sErbWzYoZW8c6RI0xpCaPxFrjr0ynqVK0tSvrMto8sh9psUqyxiryPTwdzQltz4tB90-E6yvVe12v9NVXm82wQ" autocomplete="off">
        <p class="color-fg-subtle mb-3">Create a list to organize your starred repositories.</p>
      <input type="hidden" name="repository_id" value="{{ repositoryId }}">

  <div class="form-group mx-0 mt-0 mb-2 js-user-list-input-container js-characters-remaining-container position-relative">
    <auto-check src="/stars/tuankhang2704/list-check?attr=name" required="">
      <text-expander keys=":" data-emoji-url="/autocomplete/emoji">
        <input type="text" name="user_list[name]" class="form-control js-user-list-input js-characters-remaining-field" placeholder="⭐️ Name this list" value="{{ placeholderName }}" aria-label="List name" maxlength="32" data-maxlength="32" autofocus="" required="">
      </text-expander>
      <input type="hidden" value="xk027T-872yzSxpEtkjVrnVNC2g-27vo5VjHJAkdGx3PDOUYjErbc5y2QRreBkFmMU6cWYdFfNYAshodQl1TXQ" data-csrf="true">
    </auto-check>
    <p class="note error position-relative js-user-list-error" hidden="">
      Name .
    </p>
    <p class="mt-1 text-small float-right js-characters-remaining" data-suffix="remaining" hidden="">
      32 remaining
    </p>
  </div>
  <div class="form-group mx-0 mt-0 mb-2 js-user-list-input-container js-characters-remaining-container position-relative">
    <text-expander keys=":" data-emoji-url="/autocomplete/emoji">
      <textarea name="user_list[description]" class="form-control js-user-list-input js-characters-remaining-field" placeholder="Write a description" aria-label="List description" maxlength="160" data-maxlength="160" style="height: 74px; min-height: 74px"></textarea>
    </text-expander>
    <p class="note error position-relative js-user-list-error" hidden="">
      Description .
    </p>
    <p class="mt-1 text-small float-right js-characters-remaining" data-suffix="remaining" hidden="">
      160 remaining
    </p>
  </div>
  <div hidden="hidden" data-generic-message="Unable to save your list at this time." data-view-component="true" class="js-user-list-base flash flash-error mx-0 mt-0 mb-2">
  
    .


  
</div>      <button data-disable-invalid="true" data-submitting-message="Creating..." type="submit" disabled="disabled" data-view-component="true" class="Button--primary Button--medium Button Button--fullWidth mt-2">  <span class="Button-content">
    <span class="Button-label">Create</span>
  </span>
</button>


  <p class="note mt-2 mb-0">
    <strong>Tip:</strong> type <code>:</code> to add emoji to the name or description.
  </p>
</form>
</template>



    






      

  <div id="repository-container-header" class="pt-3 hide-full-screen" data-turbo-replace="">

      <div class="d-flex flex-nowrap flex-justify-end mb-3  container-xl  px-3 px-lg-5" style="gap: 1rem;">

        <div class="flex-auto min-width-0 width-fit">
              <div id="repo-title-component" class=" d-flex flex-nowrap flex-items-center wb-break-word f3 text-normal">
    <img class="avatar mr-2 d-none d-md-block avatar-user" alt="Owner avatar" src="https://avatars.githubusercontent.com/u/9583479?s=48&amp;v=4" width="24" height="24">
  

  <strong itemprop="name" class="mr-2 flex-self-stretch d-none d-md-block no-wrap overflow-x-hidden">
    <a data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" class="d-block overflow-x-hidden color-fg-default" style="text-overflow: ellipsis;" href="/nduykhanh/basic-key">basic-key</a>
  </strong>

  <span></span><span class="Label Label--secondary v-align-middle mr-1 d-none d-md-block">Public</span>
</div>

<div class="d-none d-md-block">
</div>


        </div>

        <div id="repository-details-container" class="flex-shrink-0" data-turbo-replace="" style="max-width: 70%;">
            <ul class="pagehead-actions flex-shrink-0 d-none d-md-inline" style="padding: 2px 0;">
    
      

  <li>
        <include-fragment loading="lazy" src="/notifications/843311903/watch_subscription?aria_id_prefix=repository-details&amp;button_block=false&amp;show_count=true" data-nonce="v2:e19d43ec-b6e6-a51e-e886-a34822fa3879" data-view-component="true">
  
    <div data-hide-on-error="">
        
          <button aria-label="Watching a repository" type="button" disabled="disabled" data-view-component="true" class="Button--secondary Button--small Button">  <span class="Button-content">
      <span class="Button-visual Button-leadingVisual">
        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-eye">
    <path d="M8 2c1.981 0 3.671.992 4.933 2.078 1.27 1.091 2.187 2.345 2.637 3.023a1.62 1.62 0 0 1 0 1.798c-.45.678-1.367 1.932-2.637 3.023C11.67 13.008 9.981 14 8 14c-1.981 0-3.671-.992-4.933-2.078C1.797 10.83.88 9.576.43 8.898a1.62 1.62 0 0 1 0-1.798c.45-.677 1.367-1.931 2.637-3.022C4.33 2.992 6.019 2 8 2ZM1.679 7.932a.12.12 0 0 0 0 .136c.411.622 1.241 1.75 2.366 2.717C5.176 11.758 6.527 12.5 8 12.5c1.473 0 2.825-.742 3.955-1.715 1.124-.967 1.954-2.096 2.366-2.717a.12.12 0 0 0 0-.136c-.412-.621-1.242-1.75-2.366-2.717C10.824 4.242 9.473 3.5 8 3.5c-1.473 0-2.825.742-3.955 1.715-1.124.967-1.954 2.096-2.366 2.717ZM8 10a2 2 0 1 1-.001-3.999A2 2 0 0 1 8 10Z"></path>
</svg>
      </span>
    <span class="Button-label">Watch</span>
  </span>
</button>

    </div>
    <p data-show-on-error="" hidden="">
        
          <span class="d-flex pt-1">
            <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-alert mr-1">
    <path d="M6.457 1.047c.659-1.234 2.427-1.234 3.086 0l6.082 11.378A1.75 1.75 0 0 1 14.082 15H1.918a1.75 1.75 0 0 1-1.543-2.575Zm1.763.707a.25.25 0 0 0-.44 0L1.698 13.132a.25.25 0 0 0 .22.368h12.164a.25.25 0 0 0 .22-.368Zm.53 3.996v2.5a.75.75 0 0 1-1.5 0v-2.5a.75.75 0 0 1 1.5 0ZM9 11a1 1 0 1 1-2 0 1 1 0 0 1 2 0Z"></path>
</svg>
            Couldn't load subscription status.&nbsp;
            <button data-retry-button="" type="button" data-view-component="true" class="Button--link Button--medium Button">  <span class="Button-content">
    <span class="Button-label">Retry</span>
  </span>
</button>

          </span>

    </p>

  <div data-show-on-forbidden-error="" hidden="">
    <div class="Box">
  <div class="blankslate-container">
    <div data-view-component="true" class="blankslate blankslate-spacious color-bg-default rounded-2">
      

      <h3 data-view-component="true" class="blankslate-heading">        Uh oh!
</h3>
      <p data-view-component="true">        </p><p class="color-fg-muted my-2 mb-2 ws-normal">There was an error while loading. <a class="Link--inTextBlock" data-turbo="false" href="" aria-label="Please reload this page">Please reload this page</a>.</p>
<p></p>

</div>  </div>
</div>  </div>
</include-fragment>
  </li>

  <li>
        <div data-view-component="true" class="BtnGroup d-flex">
        <a icon="repo-forked" id="fork-button" href="/nduykhanh/basic-key/fork" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;FORK_BUTTON&quot;,&quot;repository_id&quot;:843311903,&quot;originating_url&quot;:&quot;https://github.com/nduykhanh/basic-key&quot;,&quot;user_id&quot;:155057405}}" data-hydro-click-hmac="5a612aeeebc8a8e1ea753b34a371910292fa5d1698e21f91307971f8952a4ef3" data-ga-click="Repository, show fork modal, action:files#disambiguate; text:Fork" data-view-component="true" class="btn-sm btn BtnGroup-item" aria-describedby="tooltip-362e3aa6-0193-4115-9a99-454a87bf6e4d">    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-repo-forked mr-2">
    <path d="M5 5.372v.878c0 .414.336.75.75.75h4.5a.75.75 0 0 0 .75-.75v-.878a2.25 2.25 0 1 1 1.5 0v.878a2.25 2.25 0 0 1-2.25 2.25h-1.5v2.128a2.251 2.251 0 1 1-1.5 0V8.5h-1.5A2.25 2.25 0 0 1 3.5 6.25v-.878a2.25 2.25 0 1 1 1.5 0ZM5 3.25a.75.75 0 1 0-1.5 0 .75.75 0 0 0 1.5 0Zm6.75.75a.75.75 0 1 0 0-1.5.75.75 0 0 0 0 1.5Zm-3 8.75a.75.75 0 1 0-1.5 0 .75.75 0 0 0 1.5 0Z"></path>
</svg>Fork
          <span id="repo-network-counter" data-pjax-replace="true" data-turbo-replace="true" title="0" data-view-component="true" class="Counter">0</span>
          <tool-tip id="tooltip-362e3aa6-0193-4115-9a99-454a87bf6e4d" for="fork-button" popover="manual" data-direction="s" data-type="description" data-view-component="true" class="sr-only position-absolute" role="tooltip">Fork your own copy of nduykhanh/basic-key</tool-tip>
</a>
      <details group_item="true" id="my-forks-menu-843311903" data-view-component="true" class="details-reset details-overlay BtnGroup-parent d-inline-block position-relative">
              <summary aria-label="See your forks of this repository" data-view-component="true" class="btn-sm btn BtnGroup-item px-2 float-none" aria-haspopup="menu" role="button">    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-triangle-down">
    <path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path>
</svg>
</summary>
  <details-menu class="SelectMenu right-0" src="/nduykhanh/basic-key/my_forks_menu_content?can_fork=true" role="menu">
    <div class="SelectMenu-modal">
        <button class="SelectMenu-closeButton position-absolute right-0 m-2" type="button" aria-label="Close menu" data-toggle-for="my-forks-menu-843311903">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg>
        </button>
      <div id="filter-menu-42640a" class="d-flex flex-column flex-1 overflow-hidden">
        <div class="SelectMenu-list">

            <include-fragment aria-label="Loading" data-nonce="v2:e19d43ec-b6e6-a51e-e886-a34822fa3879" data-view-component="true" class="SelectMenu-loading">
  
                <p data-show-on-error="" hidden="">
                  Forks could not be loaded
                </p>
                <span data-hide-on-error="">
              <span data-view-component="true">
  <svg role="menuitem" style="box-sizing: content-box; color: var(--color-icon-primary);" width="32" height="32" viewBox="0 0 16 16" fill="none" aria-hidden="true" data-view-component="true" class="anim-rotate">
    <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke" fill="none"></circle>
    <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>    <span class="sr-only">Loading</span>
</span>
                </span>

  <div data-show-on-forbidden-error="" hidden="">
    <div class="Box">
  <div class="blankslate-container">
    <div data-view-component="true" class="blankslate blankslate-spacious color-bg-default rounded-2">
      

      <h3 data-view-component="true" class="blankslate-heading">        Uh oh!
</h3>
      <p data-view-component="true">        </p><p class="color-fg-muted my-2 mb-2 ws-normal">There was an error while loading. <a class="Link--inTextBlock" data-turbo="false" href="" aria-label="Please reload this page">Please reload this page</a>.</p>
<p></p>

</div>  </div>
</div>  </div>
</include-fragment>        </div>
        
      </div>
    </div>
  </details-menu>
</details></div>
  </li>

  <li>
        <template class="js-unstar-confirmation-dialog-template">
  <div class="Box-header">
    <h2 class="Box-title">Unstar this repository?</h2>
  </div>
  <div class="Box-body">
    <p class="mb-3">
      This will remove {{ repoNameWithOwner }} from the {{ listsWithCount }} that it's been added to.
    </p>
    <div class="form-actions">
      <!-- '"` --><!-- </textarea></xmp> --><form class="js-social-confirmation-form" data-turbo="false" action="{{ confirmUrl }}" accept-charset="UTF-8" method="post">
        <input type="hidden" name="authenticity_token" value="{{ confirmCsrfToken }}">
        <input type="hidden" name="confirm" value="true">
          <button data-close-dialog="true" type="submit" data-view-component="true" class="btn-danger btn width-full">    Unstar
</button>
</form>    </div>
  </div>
</template>

  <div data-view-component="true" class="js-toggler-container js-social-container starring-container d-flex">
    <div data-view-component="true" class="starred BtnGroup flex-1 ml-0">
      <!-- '"` --><!-- </textarea></xmp> --><form class="js-social-form BtnGroup-parent flex-auto js-deferred-toggler-target" data-turbo="false" action="/nduykhanh/basic-key/unstar" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="6uvZjY9nV9f_CAysWIRAuJT5QXthXX59ugWqVJ9_HNSE7XaaR6xPgfGua523qD-uur4G2Gmqmm3WMOFgMY58wg" autocomplete="off">
          <input type="hidden" value="upZLAN9xUjU1ckmRDxMgb1W8_l_jpY6qVZwhCLi3_2vUkOQXF7pKYzvULqDgP195e_u5_OtSaro5qWo8FkaffQ" data-csrf="true" class="js-confirm-csrf-token">
        <input type="hidden" name="context" value="repository">
          <button data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;UNSTAR_BUTTON&quot;,&quot;repository_id&quot;:843311903,&quot;originating_url&quot;:&quot;https://github.com/nduykhanh/basic-key&quot;,&quot;user_id&quot;:155057405}}" data-hydro-click-hmac="887ac181208b67dea63af57eddbe5df6414c5c52261ec23d82a385df59851e26" data-ga-click="Repository, click unstar button, action:files#disambiguate; text:Unstar" data-aria-prefix="Starred, click to unstar this repository" aria-label="Starred, click to unstar this repository (0)" type="submit" data-view-component="true" class="rounded-left-2 btn-with-aria-count btn-sm btn BtnGroup-item">    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-star-fill starred-button-icon d-inline-block mr-2">
    <path d="M8 .25a.75.75 0 0 1 .673.418l1.882 3.815 4.21.612a.75.75 0 0 1 .416 1.279l-3.046 2.97.719 4.192a.751.751 0 0 1-1.088.791L8 12.347l-3.766 1.98a.75.75 0 0 1-1.088-.79l.72-4.194L.818 6.374a.75.75 0 0 1 .416-1.28l4.21-.611L7.327.668A.75.75 0 0 1 8 .25Z"></path>
</svg><span data-view-component="true" class="d-inline">
              Starred
</span>              <span id="repo-stars-counter-unstar" aria-label="0 users starred this repository" data-singular-suffix="user starred this repository" data-plural-suffix="users starred this repository" data-turbo-replace="true" title="0" data-view-component="true" class="Counter js-social-count">0</span>
</button></form>        <details id="details-user-list-843311903-starred" data-view-component="true" class="details-reset details-overlay BtnGroup-parent js-user-list-menu d-inline-block position-relative">
        <summary aria-label="Add this repository to a list" data-view-component="true" class="btn-sm btn BtnGroup-item px-2 float-none" aria-haspopup="menu" role="button">    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-triangle-down">
    <path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path>
</svg>
</summary>
  <details-menu class="SelectMenu right-0" src="/nduykhanh/basic-key/lists" role="menu">
    <div class="SelectMenu-modal">
        <header class="SelectMenu-header">
                <h4 class="SelectMenu-title f5" id="user-lists-menu">Lists</h4>

          <button class="SelectMenu-closeButton" type="button" aria-label="Close menu" data-toggle-for="details-user-list-843311903-starred">
            <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg>
          </button>
        </header>
      <div id="filter-menu-3836f0" class="d-flex flex-column flex-1 overflow-hidden">
        <div class="SelectMenu-list">

            <include-fragment aria-label="Loading" data-nonce="v2:e19d43ec-b6e6-a51e-e886-a34822fa3879" data-view-component="true" class="SelectMenu-loading">
  
              <span data-view-component="true">
  <svg role="menuitem" style="box-sizing: content-box; color: var(--color-icon-primary);" width="32" height="32" viewBox="0 0 16 16" fill="none" aria-hidden="true" data-view-component="true" class="anim-rotate">
    <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke" fill="none"></circle>
    <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>    <span class="sr-only">Loading</span>
</span>

  <div data-show-on-forbidden-error="" hidden="">
    <div class="Box">
  <div class="blankslate-container">
    <div data-view-component="true" class="blankslate blankslate-spacious color-bg-default rounded-2">
      

      <h3 data-view-component="true" class="blankslate-heading">        Uh oh!
</h3>
      <p data-view-component="true">        </p><p class="color-fg-muted my-2 mb-2 ws-normal">There was an error while loading. <a class="Link--inTextBlock" data-turbo="false" href="" aria-label="Please reload this page">Please reload this page</a>.</p>
<p></p>

</div>  </div>
</div>  </div>
</include-fragment>        </div>
        
      </div>
    </div>
  </details-menu>
</details>
</div>
    <div data-view-component="true" class="unstarred BtnGroup ml-0 flex-1">
      <!-- '"` --><!-- </textarea></xmp> --><form class="js-social-form BtnGroup-parent flex-auto" data-turbo="false" action="/nduykhanh/basic-key/star" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="QvGDYmbPOdqNfB8HEh9fD9X3e_CW0EHOXtZNlOY58CAsmLgLYE290NW-av0TJOJr5fGkENWwlUdLh0dMu1gPFw" autocomplete="off">
        <input type="hidden" name="context" value="repository">
          <button data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;STAR_BUTTON&quot;,&quot;repository_id&quot;:843311903,&quot;originating_url&quot;:&quot;https://github.com/nduykhanh/basic-key&quot;,&quot;user_id&quot;:155057405}}" data-hydro-click-hmac="339bda68d1d562cc6a052975ab00b335164bdb656551131a767ecc6a3bb9a324" data-ga-click="Repository, click star button, action:files#disambiguate; text:Star" data-aria-prefix="Star this repository" aria-label="Star this repository (0)" type="submit" data-view-component="true" class="js-toggler-target rounded-left-2 btn-with-aria-count btn-sm btn BtnGroup-item">    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-star d-inline-block mr-2">
    <path d="M8 .25a.75.75 0 0 1 .673.418l1.882 3.815 4.21.612a.75.75 0 0 1 .416 1.279l-3.046 2.97.719 4.192a.751.751 0 0 1-1.088.791L8 12.347l-3.766 1.98a.75.75 0 0 1-1.088-.79l.72-4.194L.818 6.374a.75.75 0 0 1 .416-1.28l4.21-.611L7.327.668A.75.75 0 0 1 8 .25Zm0 2.445L6.615 5.5a.75.75 0 0 1-.564.41l-3.097.45 2.24 2.184a.75.75 0 0 1 .216.664l-.528 3.084 2.769-1.456a.75.75 0 0 1 .698 0l2.77 1.456-.53-3.084a.75.75 0 0 1 .216-.664l2.24-2.183-3.096-.45a.75.75 0 0 1-.564-.41L8 2.694Z"></path>
</svg><span data-view-component="true" class="d-inline">
              Star
</span>              <span id="repo-stars-counter-star" aria-label="0 users starred this repository" data-singular-suffix="user starred this repository" data-plural-suffix="users starred this repository" data-turbo-replace="true" title="0" data-view-component="true" class="Counter js-social-count">0</span>
</button></form>        <details id="details-user-list-843311903-unstarred" data-view-component="true" class="details-reset details-overlay BtnGroup-parent js-user-list-menu d-inline-block position-relative">
        <summary aria-label="Add this repository to a list" data-view-component="true" class="btn-sm btn BtnGroup-item px-2 float-none" aria-haspopup="menu" role="button">    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-triangle-down">
    <path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path>
</svg>
</summary>
  <details-menu class="SelectMenu right-0" src="/nduykhanh/basic-key/lists" role="menu">
    <div class="SelectMenu-modal">
        <header class="SelectMenu-header">
                <h4 class="SelectMenu-title f5" id="user-lists-menu">Lists</h4>

          <button class="SelectMenu-closeButton" type="button" aria-label="Close menu" data-toggle-for="details-user-list-843311903-unstarred">
            <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg>
          </button>
        </header>
      <div id="filter-menu-7adfcd" class="d-flex flex-column flex-1 overflow-hidden">
        <div class="SelectMenu-list">

            <include-fragment aria-label="Loading" data-nonce="v2:e19d43ec-b6e6-a51e-e886-a34822fa3879" data-view-component="true" class="SelectMenu-loading">
  
              <span data-view-component="true">
  <svg role="menuitem" style="box-sizing: content-box; color: var(--color-icon-primary);" width="32" height="32" viewBox="0 0 16 16" fill="none" aria-hidden="true" data-view-component="true" class="anim-rotate">
    <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke" fill="none"></circle>
    <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>    <span class="sr-only">Loading</span>
</span>

  <div data-show-on-forbidden-error="" hidden="">
    <div class="Box">
  <div class="blankslate-container">
    <div data-view-component="true" class="blankslate blankslate-spacious color-bg-default rounded-2">
      

      <h3 data-view-component="true" class="blankslate-heading">        Uh oh!
</h3>
      <p data-view-component="true">        </p><p class="color-fg-muted my-2 mb-2 ws-normal">There was an error while loading. <a class="Link--inTextBlock" data-turbo="false" href="" aria-label="Please reload this page">Please reload this page</a>.</p>
<p></p>

</div>  </div>
</div>  </div>
</include-fragment>        </div>
        
      </div>
    </div>
  </details-menu>
</details>
</div></div>
  </li>

</ul>

        </div>
      </div>

        <div class=" container-xl ">
          <div id="responsive-meta-container" data-turbo-replace="">
      <div class="d-block d-md-none mb-2 px-3 px-md-4 px-lg-5">
        <div class="d-flex gap-2 mt-n3 mb-3 flex-wrap">
          <div class="d-flex flex-row gap-2">
                <link crossorigin="anonymous" media="all" rel="stylesheet" href="https://github.githubassets.com/assets/notifications-subscriptions-menu.4c58e19e87a9dd1b1dfd.module.css">

<react-partial partial-name="notifications-subscriptions-menu" data-ssr="false" data-attempted-ssr="false" data-react-profiling="false" data-catalyst="" class="loaded">
  
  <script type="application/json" data-target="react-partial.embeddedData">{"props":{"subscriptionType":"none","repositoryId":843311903,"repositoryName":"nduykhanh/basic-key","watchersCount":1,"subscribableThreadTypes":[{"name":"Issue","enabled":true,"subscribed":false},{"name":"PullRequest","enabled":true,"subscribed":false},{"name":"Release","enabled":true,"subscribed":false},{"name":"Discussion","enabled":false,"subscribed":false},{"name":"SecurityAlert","enabled":true,"subscribed":false}],"repositoryLabels":[],"showLabelSubscriptions":false}}</script>
  <div data-target="react-partial.reactRoot"><div class="d-md-none"><button type="button" data-testid="notifications-subscriptions-menu-button-desktop" aria-label="Watch: Participating in nduykhanh/basic-key" aria-haspopup="true" aria-expanded="false" tabindex="0" class="prc-Button-ButtonBase-c50BI NotificationsSubscriptionsMenu-module__watchButton--ifxlS" data-loading="false" data-size="medium" data-variant="default" aria-describedby=":r3u:-loading-announcement" id=":r3u:"><span data-component="buttonContent" data-align="center" class="prc-Button-ButtonContent-HKbr-"><span data-component="leadingVisual" class="prc-Button-Visual-2epfX prc-Button-VisualWrap-Db-eB"><svg aria-hidden="true" focusable="false" class="octicon octicon-eye" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M8 2c1.981 0 3.671.992 4.933 2.078 1.27 1.091 2.187 2.345 2.637 3.023a1.62 1.62 0 0 1 0 1.798c-.45.678-1.367 1.932-2.637 3.023C11.67 13.008 9.981 14 8 14c-1.981 0-3.671-.992-4.933-2.078C1.797 10.83.88 9.576.43 8.898a1.62 1.62 0 0 1 0-1.798c.45-.677 1.367-1.931 2.637-3.022C4.33 2.992 6.019 2 8 2ZM1.679 7.932a.12.12 0 0 0 0 .136c.411.622 1.241 1.75 2.366 2.717C5.176 11.758 6.527 12.5 8 12.5c1.473 0 2.825-.742 3.955-1.715 1.124-.967 1.954-2.096 2.366-2.717a.12.12 0 0 0 0-.136c-.412-.621-1.242-1.75-2.366-2.717C10.824 4.242 9.473 3.5 8 3.5c-1.473 0-2.825.742-3.955 1.715-1.124.967-1.954 2.096-2.366 2.717ZM8 10a2 2 0 1 1-.001-3.999A2 2 0 0 1 8 10Z"></path></svg></span><span data-component="text" class="prc-Button-Label-pTQ3x"></span></span></button></div><div class="d-none d-md-block"><button type="button" data-testid="notifications-subscriptions-menu-button-mobile" aria-label="Watch: Participating in nduykhanh/basic-key" aria-haspopup="true" aria-expanded="false" tabindex="0" class="Box-sc-g0xbh4-0 exSala prc-Button-ButtonBase-c50BI" data-loading="false" data-size="small" data-variant="default" aria-describedby=":r41:-loading-announcement" id=":r41:"><span data-component="buttonContent" class="Box-sc-g0xbh4-0 gUkoLg prc-Button-ButtonContent-HKbr-"><span data-component="leadingVisual" class="prc-Button-Visual-2epfX prc-Button-VisualWrap-Db-eB"><svg aria-hidden="true" focusable="false" class="octicon octicon-eye" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M8 2c1.981 0 3.671.992 4.933 2.078 1.27 1.091 2.187 2.345 2.637 3.023a1.62 1.62 0 0 1 0 1.798c-.45.678-1.367 1.932-2.637 3.023C11.67 13.008 9.981 14 8 14c-1.981 0-3.671-.992-4.933-2.078C1.797 10.83.88 9.576.43 8.898a1.62 1.62 0 0 1 0-1.798c.45-.677 1.367-1.931 2.637-3.022C4.33 2.992 6.019 2 8 2ZM1.679 7.932a.12.12 0 0 0 0 .136c.411.622 1.241 1.75 2.366 2.717C5.176 11.758 6.527 12.5 8 12.5c1.473 0 2.825-.742 3.955-1.715 1.124-.967 1.954-2.096 2.366-2.717a.12.12 0 0 0 0-.136c-.412-.621-1.242-1.75-2.366-2.717C10.824 4.242 9.473 3.5 8 3.5c-1.473 0-2.825.742-3.955 1.715-1.124.967-1.954 2.096-2.366 2.717ZM8 10a2 2 0 1 1-.001-3.999A2 2 0 0 1 8 10Z"></path></svg></span><span data-component="text" class="prc-Button-Label-pTQ3x">Watch<span class="ml-2 Counter rounded-3 NotificationsSubscriptionsMenu-module__watchCounter--nAbhU">1</span></span></span><span data-component="trailingAction" class="prc-Button-Visual-2epfX prc-Button-VisualWrap-Db-eB"><svg aria-hidden="true" focusable="false" class="octicon octicon-triangle-down" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path></svg></span></button></div><script type="application/json" id="__PRIMER_DATA_:r3t:__">{"resolvedServerColorMode":"night"}</script></div>
</react-partial>


              <div data-view-component="true" class="BtnGroup d-flex">
      <a id="fork-icon-button" variant="small" group_item="true" href="/nduykhanh/basic-key/fork" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;FORK_BUTTON&quot;,&quot;repository_id&quot;:843311903,&quot;originating_url&quot;:&quot;https://github.com/nduykhanh/basic-key&quot;,&quot;user_id&quot;:155057405}}" data-hydro-click-hmac="5a612aeeebc8a8e1ea753b34a371910292fa5d1698e21f91307971f8952a4ef3" data-ga-click="Repository, show fork modal, action:files#disambiguate; text:Fork" aria-labelledby="tooltip-3a04f932-55ba-4c38-bdd1-6b6748ac9ff0" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-repo-forked Button-visual">
    <path d="M5 5.372v.878c0 .414.336.75.75.75h4.5a.75.75 0 0 0 .75-.75v-.878a2.25 2.25 0 1 1 1.5 0v.878a2.25 2.25 0 0 1-2.25 2.25h-1.5v2.128a2.251 2.251 0 1 1-1.5 0V8.5h-1.5A2.25 2.25 0 0 1 3.5 6.25v-.878a2.25 2.25 0 1 1 1.5 0ZM5 3.25a.75.75 0 1 0-1.5 0 .75.75 0 0 0 1.5 0Zm6.75.75a.75.75 0 1 0 0-1.5.75.75 0 0 0 0 1.5Zm-3 8.75a.75.75 0 1 0-1.5 0 .75.75 0 0 0 1.5 0Z"></path>
</svg>
</a><tool-tip id="tooltip-3a04f932-55ba-4c38-bdd1-6b6748ac9ff0" for="fork-icon-button" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="sr-only position-absolute" aria-hidden="true" role="tooltip">Fork your own copy of nduykhanh/basic-key</tool-tip>

</div>
              <div data-view-component="true" class="js-toggler-container starring-container">
    <!-- '"` --><!-- </textarea></xmp> --><form class="starred js-social-form" data-turbo="false" action="/nduykhanh/basic-key/unstar" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="q4F67xvoIp1_mPtIrDrxhSABddrRpbcYauoaRsdva9nFh9X40yM6y3E-nHlDFo6TDkYyedlSUwgG31FyaZ4Lzw" autocomplete="off">
      <input type="hidden" name="context" value="repository">
      <button data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;UNSTAR_BUTTON&quot;,&quot;repository_id&quot;:843311903,&quot;originating_url&quot;:&quot;https://github.com/nduykhanh/basic-key&quot;,&quot;user_id&quot;:155057405}}" data-hydro-click-hmac="887ac181208b67dea63af57eddbe5df6414c5c52261ec23d82a385df59851e26" data-ga-click="Repository, click unstar button, action:files#disambiguate; text:Unstar" id="icon-button-40b5f447-e985-4899-af70-65f1a8d49623" aria-labelledby="tooltip-928aa7fb-0088-4a9e-9b78-b1285ef70872" type="submit" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium js-toggler-target starred-button-icon">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-star-fill Button-visual">
    <path d="M8 .25a.75.75 0 0 1 .673.418l1.882 3.815 4.21.612a.75.75 0 0 1 .416 1.279l-3.046 2.97.719 4.192a.751.751 0 0 1-1.088.791L8 12.347l-3.766 1.98a.75.75 0 0 1-1.088-.79l.72-4.194L.818 6.374a.75.75 0 0 1 .416-1.28l4.21-.611L7.327.668A.75.75 0 0 1 8 .25Z"></path>
</svg>
</button><tool-tip id="tooltip-928aa7fb-0088-4a9e-9b78-b1285ef70872" for="icon-button-40b5f447-e985-4899-af70-65f1a8d49623" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="sr-only position-absolute" aria-hidden="true" role="tooltip">Unstar this repository</tool-tip>

</form>
    <!-- '"` --><!-- </textarea></xmp> --><form class="unstarred js-social-form" data-turbo="false" action="/nduykhanh/basic-key/star" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="R4g-CbBR9BjXliNVUwRQGwXaRTQgGlDC4Blqt9QM7U8p4QVgttNwEo9UVq9SP-1_Ndya1GN6hEv1SGBviW0SeA" autocomplete="off">
      <input type="hidden" name="context" value="repository">
      <button data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;STAR_BUTTON&quot;,&quot;repository_id&quot;:843311903,&quot;originating_url&quot;:&quot;https://github.com/nduykhanh/basic-key&quot;,&quot;user_id&quot;:155057405}}" data-hydro-click-hmac="339bda68d1d562cc6a052975ab00b335164bdb656551131a767ecc6a3bb9a324" data-ga-click="Repository, click star button, action:files#disambiguate; text:Star" id="icon-button-298b95f3-a3ff-4c4e-90d5-1002b3cfe532" aria-labelledby="tooltip-a7552dd8-176f-4a74-bb4c-1d925b665681" type="submit" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium js-toggler-target">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-star Button-visual">
    <path d="M8 .25a.75.75 0 0 1 .673.418l1.882 3.815 4.21.612a.75.75 0 0 1 .416 1.279l-3.046 2.97.719 4.192a.751.751 0 0 1-1.088.791L8 12.347l-3.766 1.98a.75.75 0 0 1-1.088-.79l.72-4.194L.818 6.374a.75.75 0 0 1 .416-1.28l4.21-.611L7.327.668A.75.75 0 0 1 8 .25Zm0 2.445L6.615 5.5a.75.75 0 0 1-.564.41l-3.097.45 2.24 2.184a.75.75 0 0 1 .216.664l-.528 3.084 2.769-1.456a.75.75 0 0 1 .698 0l2.77 1.456-.53-3.084a.75.75 0 0 1 .216-.664l2.24-2.183-3.096-.45a.75.75 0 0 1-.564-.41L8 2.694Z"></path>
</svg>
</button><tool-tip id="tooltip-a7552dd8-176f-4a74-bb4c-1d925b665681" for="icon-button-298b95f3-a3ff-4c4e-90d5-1002b3cfe532" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="sr-only position-absolute" aria-hidden="true" role="tooltip">Star this repository</tool-tip>

</form></div>
          </div>
          <div class="d-flex flex-row gap-2">
            

          </div>
        </div>
      <p class="f4 mb-3 color-fg-muted">
        Server Key một sản phẩm của GetBasic.link
      </p>

    

    <div class="mb-3">
        

<ul class="d-flex flex-wrap mb-2 gap-2" aria-label="Repository details">
  <a class="Link--secondary no-underline d-block mr-2" role="listitem" href="/nduykhanh/basic-key/stargazers">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-star mr-1">
    <path d="M8 .25a.75.75 0 0 1 .673.418l1.882 3.815 4.21.612a.75.75 0 0 1 .416 1.279l-3.046 2.97.719 4.192a.751.751 0 0 1-1.088.791L8 12.347l-3.766 1.98a.75.75 0 0 1-1.088-.79l.72-4.194L.818 6.374a.75.75 0 0 1 .416-1.28l4.21-.611L7.327.668A.75.75 0 0 1 8 .25Zm0 2.445L6.615 5.5a.75.75 0 0 1-.564.41l-3.097.45 2.24 2.184a.75.75 0 0 1 .216.664l-.528 3.084 2.769-1.456a.75.75 0 0 1 .698 0l2.77 1.456-.53-3.084a.75.75 0 0 1 .216-.664l2.24-2.183-3.096-.45a.75.75 0 0 1-.564-.41L8 2.694Z"></path>
</svg>
    <span class="text-bold color-fg-default">0</span>
    stars
</a>  <a class="Link--secondary no-underline d-block mr-2" role="listitem" href="/nduykhanh/basic-key/forks">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-repo-forked mr-1">
    <path d="M5 5.372v.878c0 .414.336.75.75.75h4.5a.75.75 0 0 0 .75-.75v-.878a2.25 2.25 0 1 1 1.5 0v.878a2.25 2.25 0 0 1-2.25 2.25h-1.5v2.128a2.251 2.251 0 1 1-1.5 0V8.5h-1.5A2.25 2.25 0 0 1 3.5 6.25v-.878a2.25 2.25 0 1 1 1.5 0ZM5 3.25a.75.75 0 1 0-1.5 0 .75.75 0 0 0 1.5 0Zm6.75.75a.75.75 0 1 0 0-1.5.75.75 0 0 0 0 1.5Zm-3 8.75a.75.75 0 1 0-1.5 0 .75.75 0 0 0 1.5 0Z"></path>
</svg>
    <span class="text-bold color-fg-default">0</span>
    forks
</a>  <a class="Link--secondary no-underline d-block mr-2" role="listitem" href="/nduykhanh/basic-key/watchers">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-eye mr-1">
    <path d="M8 2c1.981 0 3.671.992 4.933 2.078 1.27 1.091 2.187 2.345 2.637 3.023a1.62 1.62 0 0 1 0 1.798c-.45.678-1.367 1.932-2.637 3.023C11.67 13.008 9.981 14 8 14c-1.981 0-3.671-.992-4.933-2.078C1.797 10.83.88 9.576.43 8.898a1.62 1.62 0 0 1 0-1.798c.45-.677 1.367-1.931 2.637-3.022C4.33 2.992 6.019 2 8 2ZM1.679 7.932a.12.12 0 0 0 0 .136c.411.622 1.241 1.75 2.366 2.717C5.176 11.758 6.527 12.5 8 12.5c1.473 0 2.825-.742 3.955-1.715 1.124-.967 1.954-2.096 2.366-2.717a.12.12 0 0 0 0-.136c-.412-.621-1.242-1.75-2.366-2.717C10.824 4.242 9.473 3.5 8 3.5c-1.473 0-2.825.742-3.955 1.715-1.124.967-1.954 2.096-2.366 2.717ZM8 10a2 2 0 1 1-.001-3.999A2 2 0 0 1 8 10Z"></path>
</svg>
    <span class="text-bold color-fg-default">1</span>
    watching
</a>  <include-fragment loading="lazy" src="/nduykhanh/basic-key/branch-and-tag-count" data-nonce="v2:e19d43ec-b6e6-a51e-e886-a34822fa3879" data-view-component="true">
  
    <a class="Link--secondary no-underline d-block mr-2" role="listitem" href="/nduykhanh/basic-key/branches">
  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-git-branch mr-1">
    <path d="M9.5 3.25a2.25 2.25 0 1 1 3 2.122V6A2.5 2.5 0 0 1 10 8.5H6a1 1 0 0 0-1 1v1.128a2.251 2.251 0 1 1-1.5 0V5.372a2.25 2.25 0 1 1 1.5 0v1.836A2.493 2.493 0 0 1 6 7h4a1 1 0 0 0 1-1v-.628A2.25 2.25 0 0 1 9.5 3.25Zm-6 0a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0Zm8.25-.75a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5ZM4.25 12a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Z"></path>
</svg>
    <span class="color-fg-muted">Branches</span>
</a><a class="Link--secondary no-underline d-block mr-2" role="listitem" href="/nduykhanh/basic-key/tags">
  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-tag mr-1">
    <path d="M1 7.775V2.75C1 1.784 1.784 1 2.75 1h5.025c.464 0 .91.184 1.238.513l6.25 6.25a1.75 1.75 0 0 1 0 2.474l-5.026 5.026a1.75 1.75 0 0 1-2.474 0l-6.25-6.25A1.752 1.752 0 0 1 1 7.775Zm1.5 0c0 .066.026.13.073.177l6.25 6.25a.25.25 0 0 0 .354 0l5.025-5.025a.25.25 0 0 0 0-.354l-6.25-6.25a.25.25 0 0 0-.177-.073H2.75a.25.25 0 0 0-.25.25ZM6 5a1 1 0 1 1 0 2 1 1 0 0 1 0-2Z"></path>
</svg>
    <span class="color-fg-muted">Tags</span>
</a>

  <div data-show-on-forbidden-error="" hidden="">
    <div class="Box">
  <div class="blankslate-container">
    <div data-view-component="true" class="blankslate blankslate-spacious color-bg-default rounded-2">
      

      <h3 data-view-component="true" class="blankslate-heading">        Uh oh!
</h3>
      <p data-view-component="true">        </p><p class="color-fg-muted my-2 mb-2 ws-normal">There was an error while loading. <a class="Link--inTextBlock" data-turbo="false" href="" aria-label="Please reload this page">Please reload this page</a>.</p>
<p></p>

</div>  </div>
</div>  </div>
</include-fragment>  <a class="Link--secondary no-underline d-block mr-2" role="listitem" href="/nduykhanh/basic-key/activity">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-pulse mr-1">
    <path d="M6 2c.306 0 .582.187.696.471L10 10.731l1.304-3.26A.751.751 0 0 1 12 7h3.25a.75.75 0 0 1 0 1.5h-2.742l-1.812 4.528a.751.751 0 0 1-1.392 0L6 4.77 4.696 8.03A.75.75 0 0 1 4 8.5H.75a.75.75 0 0 1 0-1.5h2.742l1.812-4.529A.751.751 0 0 1 6 2Z"></path>
</svg>
    <span>Activity</span>
</a>
</ul>

<div class="mb-2 d-flex color-fg-muted">
  <div class="d-flex flex-items-center" style="height: 21px">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-globe flex-shrink-0 mr-2">
    <path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0ZM5.78 8.75a9.64 9.64 0 0 0 1.363 4.177c.255.426.542.832.857 1.215.245-.296.551-.705.857-1.215A9.64 9.64 0 0 0 10.22 8.75Zm4.44-1.5a9.64 9.64 0 0 0-1.363-4.177c-.307-.51-.612-.919-.857-1.215a9.927 9.927 0 0 0-.857 1.215A9.64 9.64 0 0 0 5.78 7.25Zm-5.944 1.5H1.543a6.507 6.507 0 0 0 4.666 5.5c-.123-.181-.24-.365-.352-.552-.715-1.192-1.437-2.874-1.581-4.948Zm-2.733-1.5h2.733c.144-2.074.866-3.756 1.58-4.948.12-.197.237-.381.353-.552a6.507 6.507 0 0 0-4.666 5.5Zm10.181 1.5c-.144 2.074-.866 3.756-1.58 4.948-.12.197-.237.381-.353.552a6.507 6.507 0 0 0 4.666-5.5Zm2.733-1.5a6.507 6.507 0 0 0-4.666-5.5c.123.181.24.365.353.552.714 1.192 1.436 2.874 1.58 4.948Z"></path>
</svg>
  </div>
  <span class="flex-auto min-width-0 width-fit">
    Public repository
  </span>
</div>

    </div>

  </div>

</div>

          <div class="border-bottom  mx-xl-5 "></div>
        </div>

  </div>




<turbo-frame id="repo-content-turbo-frame" target="_top" data-turbo-action="advance" class="">
    <div id="repo-content-pjax-container" class="repository-content ">
      <a href="https://github.dev/" class="d-none js-github-dev-shortcut" data-hotkey=".,Mod+Alt+.">Open in github.dev</a>
  <a href="https://github.dev/" class="d-none js-github-dev-new-tab-shortcut" data-hotkey="Shift+.,Shift+>,>" target="_blank" rel="noopener noreferrer">Open in a new github.dev tab</a>
    <a class="d-none" data-hotkey=",,Mod+Alt+," target="_blank" href="/codespaces/new/nduykhanh/basic-key?resume=1">Open in codespace</a>




    
      
  <h1 class="sr-only">nduykhanh/basic-key</h1>
  <div class="clearfix container-xl px-md-4 px-lg-5 px-3">
    <div>

  <div style="max-width: 100%" data-view-component="true" class="Layout Layout--flowRow-until-md react-repos-overview-margin Layout--sidebarPosition-end Layout--sidebarPosition-flowRow-end">
  <div data-view-component="true" class="Layout-main">      <link crossorigin="anonymous" media="all" rel="stylesheet" href="https://github.githubassets.com/assets/app_assets_modules_react-partials_repos-overview_components_OverviewContent_module_css-app_as-063f6f.0ae65091095cc030075d.module.css">

<react-partial partial-name="repos-overview" data-ssr="true" data-attempted-ssr="true" data-react-profiling="false" data-catalyst="" class="loaded">
  
  <script type="application/json" data-target="react-partial.embeddedData">{"props":{"initialPayload":{"allShortcutsEnabled":true,"path":"/","repo":{"id":843311903,"defaultBranch":"main","name":"basic-key","ownerLogin":"nduykhanh","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2024-08-16T15:34:25.000+07:00","ownerAvatar":"https://avatars.githubusercontent.com/u/9583479?v=4","public":true,"private":false,"isOrgOwned":false},"currentUser":{"id":155057405,"login":"tuankhang2704","userEmail":"khanghosting1@gmail.com"},"refInfo":{"name":"main","listCacheKey":"v0:1738808591.0","canEdit":true,"refType":"branch","currentOid":"eeff703ad0e936fd0d7d144ad78e24bd4991f43f"},"tree":{"items":[{"name":"API","path":"API","contentType":"directory"},{"name":"Resources","path":"Resources","contentType":"directory"},{"name":".gitignore","path":".gitignore","contentType":"file"},{"name":"BasicKey.plist","path":"BasicKey.plist","contentType":"file"},{"name":"Makefile","path":"Makefile","contentType":"file"},{"name":"Makefile_dylib","path":"Makefile_dylib","contentType":"file"},{"name":"Obfuscate.h","path":"Obfuscate.h","contentType":"file"},{"name":"README.md","path":"README.md","contentType":"file"},{"name":"Tweak.xm","path":"Tweak.xm","contentType":"file"},{"name":"control","path":"control","contentType":"file"}],"templateDirectorySuggestionUrl":null,"readme":null,"totalCount":10,"showBranchInfobar":false},"fileTree":null,"fileTreeProcessingTime":null,"foldersToFetch":[],"treeExpanded":false,"symbolsExpanded":false,"isOverview":true,"overview":{"banners":{"shouldRecommendReadme":false,"isPersonalRepo":false,"showUseActionBanner":false,"actionSlug":null,"actionId":null,"showProtectBranchBanner":false,"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_repo","releasePath":"/nduykhanh/basic-key/releases/new?marketplace=true","showPublishActionBanner":false},"interactionLimitBanner":null,"showInvitationBanner":false,"inviterName":null,"actionsMigrationBannerInfo":{"releaseTags":[],"showImmutableActionsMigrationBanner":false,"initialMigrationStatus":null},"showDeployBanner":false,"detectedStack":{"framework":null,"packageManager":null}},"codeButton":{"contactPath":"/contact","isEnterprise":false,"local":{"protocolInfo":{"httpAvailable":true,"sshAvailable":true,"httpUrl":"https://github.com/nduykhanh/basic-key.git","showCloneWarning":true,"sshUrl":"git@github.com:nduykhanh/basic-key.git","sshCertificatesRequired":false,"sshCertificatesAvailable":null,"ghCliUrl":"gh repo clone nduykhanh/basic-key","defaultProtocol":"http","newSshKeyUrl":"/settings/ssh/new","setProtocolPath":"/users/set_protocol"},"platformInfo":{"cloneUrl":"https://desktop.github.com","showVisualStudioCloneButton":false,"visualStudioCloneUrl":"https://windows.github.com","showXcodeCloneButton":false,"xcodeCloneUrl":"xcode://clone?repo=https%3A%2F%2Fgithub.com%2Fnduykhanh%2Fbasic-key","zipballUrl":"/nduykhanh/basic-key/archive/refs/heads/main.zip"}},"repoPolicyInfo":{"allowed":true,"canBill":true,"changesWouldBeSafe":true,"disabledByBusiness":false,"disabledByOrganization":false,"hasIpAllowLists":false},"currentUserIsEnterpriseManaged":false,"enterpriseManagedBusinessName":null,"codespacesEnabled":true,"hasAccessToCodespaces":true},"popovers":{"rename":null,"renamedParentRepo":null},"commitCount":"14","overviewFiles":[{"displayName":"README.md","repoName":"basic-key","refName":"main","path":"README.md","preferredFileType":"readme","tabName":"README","richText":"\u003carticle class=\"markdown-body entry-content container-lg\" itemprop=\"text\"\u003e\u003cdiv class=\"markdown-heading\" dir=\"auto\"\u003e\u003ch1 tabindex=\"-1\" class=\"heading-element\" dir=\"auto\"\u003eBasic Key\u003c/h1\u003e\u003ca id=\"user-content-basic-key\" class=\"anchor\" aria-label=\"Permalink: Basic Key\" href=\"#basic-key\"\u003e\u003csvg class=\"octicon octicon-link\" viewBox=\"0 0 16 16\" version=\"1.1\" width=\"16\" height=\"16\" aria-hidden=\"true\"\u003e\u003cpath d=\"m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z\"\u003e\u003c/path\u003e\u003c/svg\u003e\u003c/a\u003e\u003c/div\u003e\n\u003cp dir=\"auto\"\u003e\u003ca href=\"https://key.getbasic.link\" rel=\"nofollow\"\u003eServer Key\u003c/a\u003e một sản phẩm của \u003ca href=\"https://getbasic.link/\" rel=\"nofollow\"\u003eGetBasic.link\u003c/a\u003e\u003c/p\u003e\n\u003cp dir=\"auto\"\u003eTích hợp menu key được dùng để tiêm vào .IPA cho mục đích quản lý người dùng truy cập vào ứng dụng. Hỗ trợ build .dylib và .framework với \u003ca href=\"https://theos.dev/\" rel=\"nofollow\"\u003eTHEOS\u003c/a\u003e.\u003c/p\u003e\n\u003cp dir=\"auto\"\u003eDemo: \u003ca href=\"https://testflight.apple.com/join/aR61BWFh\" rel=\"nofollow\"\u003ehttps://testflight.apple.com/join/aR61BWFh\u003c/a\u003e\u003c/p\u003e\n\u003cdiv class=\"markdown-heading\" dir=\"auto\"\u003e\u003ch1 tabindex=\"-1\" class=\"heading-element\" dir=\"auto\"\u003eInstallation\u003c/h1\u003e\u003ca id=\"user-content-installation\" class=\"anchor\" aria-label=\"Permalink: Installation\" href=\"#installation\"\u003e\u003csvg class=\"octicon octicon-link\" viewBox=\"0 0 16 16\" version=\"1.1\" width=\"16\" height=\"16\" aria-hidden=\"true\"\u003e\u003cpath d=\"m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z\"\u003e\u003c/path\u003e\u003c/svg\u003e\u003c/a\u003e\u003c/div\u003e\n\u003cul dir=\"auto\"\u003e\n\u003cli\u003eCài đặt \u003ca href=\"https://theos.dev/\" rel=\"nofollow\"\u003eTHEOS\u003c/a\u003e trên máy tính hoặc trên điện thoại của bạn.\u003c/li\u003e\n\u003cli\u003eTải Basic Key version mới nhất về tại mục \u003ca href=\"https://github.com/nduykhanh/basic-key/releases\"\u003eRelease\u003c/a\u003e và giải nén.\u003c/li\u003e\n\u003cli\u003eĐăng kí tài khoản tại \u003ca href=\"https://key.getbasic.link/\" rel=\"nofollow\"\u003eBasic key\u003c/a\u003e và tạo package.\u003c/li\u003e\n\u003cli\u003eCopy token của package và thay thế thông tin YOUR_TOKEN trong file \u003ca href=\"https://github.com/nduykhanh/basic-key/blob/main/Tweak.xm\"\u003eTweak.xm\u003c/a\u003e\u003c/li\u003e\n\u003cli\u003eTuỳ chỉnh setRealUdidMode là true hoặc false tuỳ vào chế độ của package: true cho real udid và false cho fake udid\u003c/li\u003e\n\u003cli\u003eBên trong hàm paid có thể load thư viện bên thứ 3 như Mod Menu sau khi nhập key thành công. Không dùng giữ nguyên.\u003c/li\u003e\n\u003c/ul\u003e\n\u003cdiv class=\"highlight highlight-source-c++ notranslate position-relative overflow-auto\" dir=\"auto\" data-snippet-clipboard-copy-content=\"#import \u0026quot;API/BasicKey.h\u0026quot;\n#import \u0026quot;Obfuscate.h\u0026quot;\n#define timer(sec) dispatch_after(dispatch_time(DISPATCH_TIME_NOW, sec * NSEC_PER_SEC), dispatch_get_main_queue(), ^\n\nstatic void didFinishLaunching(CFNotificationCenterRef center, void *observer, CFStringRef name, const void *object, CFDictionaryRef info) {\n  BasicKey *API = [[BasicKey alloc] init];\n  [API setToken:@\u0026quot;YOUR_TOKEN\u0026quot;]; // getbasic.linkxxxxxxxxxxx \n  [API setRealUdidMode:true];   // true: Real UDID | false: Fake UDID\n\n  [API paid:^{\n      // NSLog(@\u0026quot;Executing actions after login success\u0026quot;);\n      // [API showMessage:@\u0026quot;Basic Key\u0026quot; message:@\u0026quot;Start mod menu theos\u0026quot; shouldExit:NO];\n  }];\n}\n\n%ctor {\n  CFNotificationCenterAddObserver(CFNotificationCenterGetLocalCenter(), NULL, \u0026amp;didFinishLaunching, (CFStringRef)UIApplicationDidFinishLaunchingNotification, NULL, CFNotificationSuspensionBehaviorDeliverImmediately);\n}\n\"\u003e\u003cpre\u003e#\u003cspan class=\"pl-k\"\u003eimport\u003c/span\u003e \u003cspan class=\"pl-s\"\u003e\u003cspan class=\"pl-pds\"\u003e\"\u003c/span\u003eAPI/BasicKey.h\u003cspan class=\"pl-pds\"\u003e\"\u003c/span\u003e\u003c/span\u003e\n#\u003cspan class=\"pl-k\"\u003eimport\u003c/span\u003e \u003cspan class=\"pl-s\"\u003e\u003cspan class=\"pl-pds\"\u003e\"\u003c/span\u003eObfuscate.h\u003cspan class=\"pl-pds\"\u003e\"\u003c/span\u003e\u003c/span\u003e\n#\u003cspan class=\"pl-k\"\u003edefine\u003c/span\u003e \u003cspan class=\"pl-en\"\u003etimer\u003c/span\u003e(\u003cspan class=\"pl-v\"\u003esec\u003c/span\u003e) dispatch_after(dispatch_time(DISPATCH_TIME_NOW, sec * NSEC_PER_SEC), dispatch_get_main_queue(), ^\n\n\u003cspan class=\"pl-k\"\u003estatic\u003c/span\u003e \u003cspan class=\"pl-k\"\u003evoid\u003c/span\u003e \u003cspan class=\"pl-en\"\u003edidFinishLaunching\u003c/span\u003e(CFNotificationCenterRef center, \u003cspan class=\"pl-k\"\u003evoid\u003c/span\u003e *observer, CFStringRef name, \u003cspan class=\"pl-k\"\u003econst\u003c/span\u003e \u003cspan class=\"pl-k\"\u003evoid\u003c/span\u003e *object, CFDictionaryRef info) {\n  BasicKey *API = [[BasicKey alloc] init];\n  [API setToken:@\u003cspan class=\"pl-s\"\u003e\u003cspan class=\"pl-pds\"\u003e\"\u003c/span\u003eYOUR_TOKEN\u003cspan class=\"pl-pds\"\u003e\"\u003c/span\u003e\u003c/span\u003e]; \u003cspan class=\"pl-c\"\u003e\u003cspan class=\"pl-c\"\u003e//\u003c/span\u003e getbasic.linkxxxxxxxxxxx \u003c/span\u003e\n  [API setRealUdidMode:\u003cspan class=\"pl-c1\"\u003etrue\u003c/span\u003e];   \u003cspan class=\"pl-c\"\u003e\u003cspan class=\"pl-c\"\u003e//\u003c/span\u003e true: Real UDID | false: Fake UDID\u003c/span\u003e\n\n  [API paid:^{\n      \u003cspan class=\"pl-c\"\u003e\u003cspan class=\"pl-c\"\u003e//\u003c/span\u003e NSLog(@\"Executing actions after login success\");\u003c/span\u003e\n      \u003cspan class=\"pl-c\"\u003e\u003cspan class=\"pl-c\"\u003e//\u003c/span\u003e [API showMessage:@\"Basic Key\" message:@\"Start mod menu theos\" shouldExit:NO];\u003c/span\u003e\n  }];\n}\n\n%ctor {\n  \u003cspan class=\"pl-c1\"\u003eCFNotificationCenterAddObserver\u003c/span\u003e(\u003cspan class=\"pl-c1\"\u003eCFNotificationCenterGetLocalCenter\u003c/span\u003e(), \u003cspan class=\"pl-c1\"\u003eNULL\u003c/span\u003e, \u0026amp;didFinishLaunching, (CFStringRef)UIApplicationDidFinishLaunchingNotification, \u003cspan class=\"pl-c1\"\u003eNULL\u003c/span\u003e, CFNotificationSuspensionBehaviorDeliverImmediately);\n}\n\u003c/pre\u003e\u003c/div\u003e\n\u003cul dir=\"auto\"\u003e\n\u003cli\u003eChạy lệnh để build .framwork (sử dụng Makefile hiện tại) hoặc .dylib (đổi tên file Makefile_dylib thành Makefile trước khi build)\u003c/li\u003e\n\u003c/ul\u003e\n\u003cdiv class=\"highlight highlight-source-c++ notranslate position-relative overflow-auto\" dir=\"auto\" data-snippet-clipboard-copy-content=\"make clean package\"\u003e\u003cpre\u003emake clean package\u003c/pre\u003e\u003c/div\u003e\n\u003cp dir=\"auto\"\u003eLưu ý: hiện tại chỉ hỗ trợ make trên macOS. (supported on platforms using the legacy runtime).\u003c/p\u003e\n\u003cdiv class=\"markdown-heading\" dir=\"auto\"\u003e\u003ch1 tabindex=\"-1\" class=\"heading-element\" dir=\"auto\"\u003eScreenShots\u003c/h1\u003e\u003ca id=\"user-content-screenshots\" class=\"anchor\" aria-label=\"Permalink: ScreenShots\" href=\"#screenshots\"\u003e\u003csvg class=\"octicon octicon-link\" viewBox=\"0 0 16 16\" version=\"1.1\" width=\"16\" height=\"16\" aria-hidden=\"true\"\u003e\u003cpath d=\"m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z\"\u003e\u003c/path\u003e\u003c/svg\u003e\u003c/a\u003e\u003c/div\u003e\n\u003cmarkdown-accessiblity-table\u003e\u003ctable\u003e\n\u003cthead\u003e\n\u003ctr\u003e\n\u003cth align=\"center\"\u003eStyle\u003c/th\u003e\n\u003cth align=\"center\"\u003eImage\u003c/th\u003e\n\u003cth align=\"center\"\u003eImage\u003c/th\u003e\n\u003c/tr\u003e\n\u003c/thead\u003e\n\u003ctbody\u003e\n\u003ctr\u003e\n\u003ctd align=\"center\"\u003eAlert\u003c/td\u003e\n\u003ctd align=\"center\"\u003e\u003ca target=\"_blank\" rel=\"noopener noreferrer\" href=\"https://private-user-images.githubusercontent.com/9583479/358607248-4db62396-536a-4100-8d96-fd7d159cb508.PNG?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTM2NzQ1NjYsIm5iZiI6MTc1MzY3NDI2NiwicGF0aCI6Ii85NTgzNDc5LzM1ODYwNzI0OC00ZGI2MjM5Ni01MzZhLTQxMDAtOGQ5Ni1mZDdkMTU5Y2I1MDguUE5HP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI1MDcyOCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNTA3MjhUMDM0NDI2WiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9MDU2NjYzMzA0YjI4N2MyMjM3Y2U1YjUzZDVjZWU5ZWFlNmEwMjg0M2QyMmVlZGRjMGJkOTUyODljNTM1NTgwZSZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.94NoOEsdNZMun7kIXWE4M5IHVUfVY9M-WiQeu43lRsM\"\u003e\u003cimg src=\"https://private-user-images.githubusercontent.com/9583479/358607248-4db62396-536a-4100-8d96-fd7d159cb508.PNG?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTM2NzQ1NjYsIm5iZiI6MTc1MzY3NDI2NiwicGF0aCI6Ii85NTgzNDc5LzM1ODYwNzI0OC00ZGI2MjM5Ni01MzZhLTQxMDAtOGQ5Ni1mZDdkMTU5Y2I1MDguUE5HP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI1MDcyOCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNTA3MjhUMDM0NDI2WiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9MDU2NjYzMzA0YjI4N2MyMjM3Y2U1YjUzZDVjZWU5ZWFlNmEwMjg0M2QyMmVlZGRjMGJkOTUyODljNTM1NTgwZSZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.94NoOEsdNZMun7kIXWE4M5IHVUfVY9M-WiQeu43lRsM\" width=\"300\" style=\"max-width: 100%;\"\u003e\u003c/a\u003e\u003c/td\u003e\n\u003ctd align=\"center\"\u003e\u003ca target=\"_blank\" rel=\"noopener noreferrer\" href=\"https://private-user-images.githubusercontent.com/9583479/358607246-caef0062-ab40-45f6-bfc8-e112eaca4bc4.PNG?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTM2NzQ1NjYsIm5iZiI6MTc1MzY3NDI2NiwicGF0aCI6Ii85NTgzNDc5LzM1ODYwNzI0Ni1jYWVmMDA2Mi1hYjQwLTQ1ZjYtYmZjOC1lMTEyZWFjYTRiYzQuUE5HP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI1MDcyOCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNTA3MjhUMDM0NDI2WiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9N2FiMjliZTc0MmU3ZDcxZDE1Y2VmOTYyNjhhMGNiMzU1MjAxOTJlMTIyYTVlZTEzNDY3ZGZmOGZhZTYyNGQ4ZCZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.945G9kckFBV3p0qDXTAmjGlG_sqKJMc0nmH1SgYVNm4\"\u003e\u003cimg src=\"https://private-user-images.githubusercontent.com/9583479/358607246-caef0062-ab40-45f6-bfc8-e112eaca4bc4.PNG?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTM2NzQ1NjYsIm5iZiI6MTc1MzY3NDI2NiwicGF0aCI6Ii85NTgzNDc5LzM1ODYwNzI0Ni1jYWVmMDA2Mi1hYjQwLTQ1ZjYtYmZjOC1lMTEyZWFjYTRiYzQuUE5HP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI1MDcyOCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNTA3MjhUMDM0NDI2WiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9N2FiMjliZTc0MmU3ZDcxZDE1Y2VmOTYyNjhhMGNiMzU1MjAxOTJlMTIyYTVlZTEzNDY3ZGZmOGZhZTYyNGQ4ZCZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.945G9kckFBV3p0qDXTAmjGlG_sqKJMc0nmH1SgYVNm4\" width=\"300\" style=\"max-width: 100%;\"\u003e\u003c/a\u003e\u003c/td\u003e\n\u003c/tr\u003e\n\u003ctr\u003e\n\u003ctd align=\"center\"\u003eProgress\u003c/td\u003e\n\u003ctd align=\"center\"\u003e\u003ca target=\"_blank\" rel=\"noopener noreferrer\" href=\"https://private-user-images.githubusercontent.com/9583479/358607242-77e462d2-8ca8-4bcc-b1a7-dbca14981300.PNG?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTM2NzQ1NjYsIm5iZiI6MTc1MzY3NDI2NiwicGF0aCI6Ii85NTgzNDc5LzM1ODYwNzI0Mi03N2U0NjJkMi04Y2E4LTRiY2MtYjFhNy1kYmNhMTQ5ODEzMDAuUE5HP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI1MDcyOCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNTA3MjhUMDM0NDI2WiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9OTU1NTk3OTg4NWUzMWQyZDJjZGE1NjY4MGUxYzZjN2Y1YTE2Mjg3ZDg3NzdmMWM4NDJjZmYwYmE4NmNiYzgyNiZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.w-ct__KGkAUGqfdNd6BCM25yEn3xyaQSyk8DJ_byIiY\"\u003e\u003cimg src=\"https://private-user-images.githubusercontent.com/9583479/358607242-77e462d2-8ca8-4bcc-b1a7-dbca14981300.PNG?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTM2NzQ1NjYsIm5iZiI6MTc1MzY3NDI2NiwicGF0aCI6Ii85NTgzNDc5LzM1ODYwNzI0Mi03N2U0NjJkMi04Y2E4LTRiY2MtYjFhNy1kYmNhMTQ5ODEzMDAuUE5HP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI1MDcyOCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNTA3MjhUMDM0NDI2WiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9OTU1NTk3OTg4NWUzMWQyZDJjZGE1NjY4MGUxYzZjN2Y1YTE2Mjg3ZDg3NzdmMWM4NDJjZmYwYmE4NmNiYzgyNiZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.w-ct__KGkAUGqfdNd6BCM25yEn3xyaQSyk8DJ_byIiY\" width=\"300\" style=\"max-width: 100%;\"\u003e\u003c/a\u003e\u003c/td\u003e\n\u003ctd align=\"center\"\u003e\u003ca target=\"_blank\" rel=\"noopener noreferrer\" href=\"https://private-user-images.githubusercontent.com/9583479/358607242-77e462d2-8ca8-4bcc-b1a7-dbca14981300.PNG?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTM2NzQ1NjYsIm5iZiI6MTc1MzY3NDI2NiwicGF0aCI6Ii85NTgzNDc5LzM1ODYwNzI0Mi03N2U0NjJkMi04Y2E4LTRiY2MtYjFhNy1kYmNhMTQ5ODEzMDAuUE5HP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI1MDcyOCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNTA3MjhUMDM0NDI2WiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9OTU1NTk3OTg4NWUzMWQyZDJjZGE1NjY4MGUxYzZjN2Y1YTE2Mjg3ZDg3NzdmMWM4NDJjZmYwYmE4NmNiYzgyNiZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.w-ct__KGkAUGqfdNd6BCM25yEn3xyaQSyk8DJ_byIiY\"\u003e\u003cimg src=\"https://private-user-images.githubusercontent.com/9583479/358607242-77e462d2-8ca8-4bcc-b1a7-dbca14981300.PNG?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTM2NzQ1NjYsIm5iZiI6MTc1MzY3NDI2NiwicGF0aCI6Ii85NTgzNDc5LzM1ODYwNzI0Mi03N2U0NjJkMi04Y2E4LTRiY2MtYjFhNy1kYmNhMTQ5ODEzMDAuUE5HP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI1MDcyOCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNTA3MjhUMDM0NDI2WiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9OTU1NTk3OTg4NWUzMWQyZDJjZGE1NjY4MGUxYzZjN2Y1YTE2Mjg3ZDg3NzdmMWM4NDJjZmYwYmE4NmNiYzgyNiZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.w-ct__KGkAUGqfdNd6BCM25yEn3xyaQSyk8DJ_byIiY\" width=\"300\" style=\"max-width: 100%;\"\u003e\u003c/a\u003e\u003c/td\u003e\n\u003c/tr\u003e\n\u003ctr\u003e\n\u003ctd align=\"center\"\u003eMenu key\u003c/td\u003e\n\u003ctd align=\"center\"\u003e\u003ca target=\"_blank\" rel=\"noopener noreferrer\" href=\"https://private-user-images.githubusercontent.com/9583479/358607239-054fea0b-bba3-4b22-b3ad-893a81aadf3d.PNG?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTM2NzQ1NjYsIm5iZiI6MTc1MzY3NDI2NiwicGF0aCI6Ii85NTgzNDc5LzM1ODYwNzIzOS0wNTRmZWEwYi1iYmEzLTRiMjItYjNhZC04OTNhODFhYWRmM2QuUE5HP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI1MDcyOCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNTA3MjhUMDM0NDI2WiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9MGU3MmRhYTc2MDJmMDA5N2NjM2U4ZGVhOTBiYjZhNzZhZjJhMWY1NTJhNzgxMmM2MTQxNTI0OTg2YjQ3MmFkZSZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.pS_LP-c3uztTHmjl9rnL6Hxy4LGZ2-tILTyE_azKRrI\"\u003e\u003cimg src=\"https://private-user-images.githubusercontent.com/9583479/358607239-054fea0b-bba3-4b22-b3ad-893a81aadf3d.PNG?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTM2NzQ1NjYsIm5iZiI6MTc1MzY3NDI2NiwicGF0aCI6Ii85NTgzNDc5LzM1ODYwNzIzOS0wNTRmZWEwYi1iYmEzLTRiMjItYjNhZC04OTNhODFhYWRmM2QuUE5HP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI1MDcyOCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNTA3MjhUMDM0NDI2WiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9MGU3MmRhYTc2MDJmMDA5N2NjM2U4ZGVhOTBiYjZhNzZhZjJhMWY1NTJhNzgxMmM2MTQxNTI0OTg2YjQ3MmFkZSZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.pS_LP-c3uztTHmjl9rnL6Hxy4LGZ2-tILTyE_azKRrI\" width=\"300\" style=\"max-width: 100%;\"\u003e\u003c/a\u003e\u003c/td\u003e\n\u003ctd align=\"center\"\u003e\u003ca target=\"_blank\" rel=\"noopener noreferrer\" href=\"https://private-user-images.githubusercontent.com/9583479/358607228-e5ac5b98-a533-4add-a72a-77758b677962.PNG?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTM2NzQ1NjYsIm5iZiI6MTc1MzY3NDI2NiwicGF0aCI6Ii85NTgzNDc5LzM1ODYwNzIyOC1lNWFjNWI5OC1hNTMzLTRhZGQtYTcyYS03Nzc1OGI2Nzc5NjIuUE5HP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI1MDcyOCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNTA3MjhUMDM0NDI2WiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9M2U5MzBmYzY3NzZjNTI3YjJiZjlhZTAxNDM3NGZkZjM1ZGUxNjE0NmIyYzEwM2ZkZjQ1ZDFhZWVhODYxMGY0NyZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.ZRI0QgXhp8cVPXwRwAZ47jjrc6P_RPTgOqdqekBlzNw\"\u003e\u003cimg src=\"https://private-user-images.githubusercontent.com/9583479/358607228-e5ac5b98-a533-4add-a72a-77758b677962.PNG?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTM2NzQ1NjYsIm5iZiI6MTc1MzY3NDI2NiwicGF0aCI6Ii85NTgzNDc5LzM1ODYwNzIyOC1lNWFjNWI5OC1hNTMzLTRhZGQtYTcyYS03Nzc1OGI2Nzc5NjIuUE5HP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI1MDcyOCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNTA3MjhUMDM0NDI2WiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9M2U5MzBmYzY3NzZjNTI3YjJiZjlhZTAxNDM3NGZkZjM1ZGUxNjE0NmIyYzEwM2ZkZjQ1ZDFhZWVhODYxMGY0NyZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.ZRI0QgXhp8cVPXwRwAZ47jjrc6P_RPTgOqdqekBlzNw\" width=\"300\" style=\"max-width: 100%;\"\u003e\u003c/a\u003e\u003c/td\u003e\n\u003c/tr\u003e\n\u003c/tbody\u003e\n\u003c/table\u003e\u003c/markdown-accessiblity-table\u003e\n\u003cdiv class=\"markdown-heading\" dir=\"auto\"\u003e\u003ch1 tabindex=\"-1\" class=\"heading-element\" dir=\"auto\"\u003eTác Giả BasicKey\u003c/h1\u003e\u003ca id=\"user-content-tác-giả-basickey\" class=\"anchor\" aria-label=\"Permalink: Tác Giả BasicKey\" href=\"#tác-giả-basickey\"\u003e\u003csvg class=\"octicon octicon-link\" viewBox=\"0 0 16 16\" version=\"1.1\" width=\"16\" height=\"16\" aria-hidden=\"true\"\u003e\u003cpath d=\"m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z\"\u003e\u003c/path\u003e\u003c/svg\u003e\u003c/a\u003e\u003c/div\u003e\n\u003cp dir=\"auto\"\u003eCopyright By \u003ca href=\"https://t.me/kennguyen02\" rel=\"nofollow\"\u003eKen Nguyen\u003c/a\u003e\u003c/p\u003e\n\u003c/article\u003e","loaded":true,"timedOut":false,"errorMessage":null,"headerInfo":{"toc":[{"level":1,"text":"Basic Key","anchor":"basic-key","htmlText":"Basic Key"},{"level":1,"text":"Installation","anchor":"installation","htmlText":"Installation"},{"level":1,"text":"ScreenShots","anchor":"screenshots","htmlText":"ScreenShots"},{"level":1,"text":"Tác Giả BasicKey","anchor":"tác-giả-basickey","htmlText":"Tác Giả BasicKey"}],"siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2Fnduykhanh%2Fbasic-key"}}],"overviewFilesProcessingTime":0,"createFromTemplatePath":"/new?template_name=basic-key\u0026template_owner=nduykhanh"}},"appPayload":{"helpUrl":"https://docs.github.com","findFileWorkerPath":"/assets-cdn/worker/find-file-worker-263cab1760dd.js","findInFileWorkerPath":"/assets-cdn/worker/find-in-file-worker-0b6f8702959e.js","githubDevUrl":"https://github.dev/","enabled_features":{"copilot_workspace":false,"code_nav_ui_events":false,"react_blob_overlay":true,"accessible_code_button":true}}}}</script>
  <div data-target="react-partial.reactRoot">   <div class="OverviewContent-module__Box--uNd1J"><div class="OverviewHeader-module__Box--fFKf5"></div><div class="OverviewContent-module__Box_1--RhaEy"><div class="OverviewContent-module__Box_2--uHewD"><div class="OverviewContent-module__Box_3--NEYWl"><button type="button" aria-haspopup="true" aria-expanded="false" tabindex="0" aria-label="main branch" data-testid="anchor-button" class="prc-Button-ButtonBase-c50BI overview-ref-selector width-full RefSelectorAnchoredOverlay-module__RefSelectorOverlayBtn--VlL0G" data-loading="false" data-size="medium" data-variant="default" aria-describedby="branch-picker-repos-header-ref-selector-loading-announcement" id="branch-picker-repos-header-ref-selector" data-hotkey="w" style="min-width: 0px;"><span data-component="buttonContent" data-align="center" class="prc-Button-ButtonContent-HKbr-"><span data-component="text" class="prc-Button-Label-pTQ3x"><div class="RefSelectorAnchoredOverlay-module__RefSelectorOverlayContainer--zopKZ"><div class="RefSelectorAnchoredOverlay-module__RefSelectorOverlayHeader--j083h"><svg aria-hidden="true" focusable="false" class="octicon octicon-git-branch" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M9.5 3.25a2.25 2.25 0 1 1 3 2.122V6A2.5 2.5 0 0 1 10 8.5H6a1 1 0 0 0-1 1v1.128a2.251 2.251 0 1 1-1.5 0V5.372a2.25 2.25 0 1 1 1.5 0v1.836A2.493 2.493 0 0 1 6 7h4a1 1 0 0 0 1-1v-.628A2.25 2.25 0 0 1 9.5 3.25Zm-6 0a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0Zm8.25-.75a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5ZM4.25 12a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Z"></path></svg></div><div class="ref-selector-button-text-container RefSelectorAnchoredOverlay-module__RefSelectorBtnTextContainer--k6jL0"><span class="RefSelectorAnchoredOverlay-module__RefSelectorText--A0p63">&nbsp;main</span></div></div></span><span data-component="trailingVisual" class="prc-Button-Visual-2epfX prc-Button-VisualWrap-Db-eB"><svg aria-hidden="true" focusable="false" class="octicon octicon-triangle-down" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path></svg></span></span></button><button hidden="" data-hotkey-scope="read-only-cursor-text-area" data-hotkey="w"></button></div><div class="OverviewContent-module__Box_4--rOz8J"><a type="button" href="/nduykhanh/basic-key/branches" class="prc-Button-ButtonBase-c50BI OverviewContent-module__Button--MDoYP" data-loading="false" data-size="medium" data-variant="invisible" aria-describedby=":r2u:-loading-announcement"><span data-component="buttonContent" data-align="center" class="prc-Button-ButtonContent-HKbr-"><span data-component="leadingVisual" class="prc-Button-Visual-2epfX prc-Button-VisualWrap-Db-eB"><svg aria-hidden="true" focusable="false" class="octicon octicon-git-branch" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M9.5 3.25a2.25 2.25 0 1 1 3 2.122V6A2.5 2.5 0 0 1 10 8.5H6a1 1 0 0 0-1 1v1.128a2.251 2.251 0 1 1-1.5 0V5.372a2.25 2.25 0 1 1 1.5 0v1.836A2.493 2.493 0 0 1 6 7h4a1 1 0 0 0 1-1v-.628A2.25 2.25 0 0 1 9.5 3.25Zm-6 0a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0Zm8.25-.75a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5ZM4.25 12a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Z"></path></svg></span><span data-component="text" class="prc-Button-Label-pTQ3x"><span><strong class="color-fg-default">1 </strong>Branch</span></span></span></a><a type="button" href="/nduykhanh/basic-key/tags" class="prc-Button-ButtonBase-c50BI OverviewContent-module__Button--MDoYP" data-loading="false" data-size="medium" data-variant="invisible" aria-describedby=":r2v:-loading-announcement"><span data-component="buttonContent" data-align="center" class="prc-Button-ButtonContent-HKbr-"><span data-component="leadingVisual" class="prc-Button-Visual-2epfX prc-Button-VisualWrap-Db-eB"><svg aria-hidden="true" focusable="false" class="octicon octicon-tag" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M1 7.775V2.75C1 1.784 1.784 1 2.75 1h5.025c.464 0 .91.184 1.238.513l6.25 6.25a1.75 1.75 0 0 1 0 2.474l-5.026 5.026a1.75 1.75 0 0 1-2.474 0l-6.25-6.25A1.752 1.752 0 0 1 1 7.775Zm1.5 0c0 .066.026.13.073.177l6.25 6.25a.25.25 0 0 0 .354 0l5.025-5.025a.25.25 0 0 0 0-.354l-6.25-6.25a.25.25 0 0 0-.177-.073H2.75a.25.25 0 0 0-.25.25ZM6 5a1 1 0 1 1 0 2 1 1 0 0 1 0-2Z"></path></svg></span><span data-component="text" class="prc-Button-Label-pTQ3x"><span><strong class="color-fg-default">3 </strong>Tags</span></span></span></a></div><div class="OverviewContent-module__Box_5--PPbL1"><a type="button" aria-label="Go to Branches page" href="/nduykhanh/basic-key/branches" class="prc-Button-ButtonBase-c50BI OverviewContent-module__Button_1--_1Ng2" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r30:-loading-announcement"><svg aria-hidden="true" focusable="false" class="octicon octicon-git-branch" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M9.5 3.25a2.25 2.25 0 1 1 3 2.122V6A2.5 2.5 0 0 1 10 8.5H6a1 1 0 0 0-1 1v1.128a2.251 2.251 0 1 1-1.5 0V5.372a2.25 2.25 0 1 1 1.5 0v1.836A2.493 2.493 0 0 1 6 7h4a1 1 0 0 0 1-1v-.628A2.25 2.25 0 0 1 9.5 3.25Zm-6 0a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0Zm8.25-.75a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5ZM4.25 12a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Z"></path></svg></a><a type="button" aria-label="Go to Tags page" href="/nduykhanh/basic-key/tags" class="prc-Button-ButtonBase-c50BI OverviewContent-module__Button_1--_1Ng2" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r31:-loading-announcement"><svg aria-hidden="true" focusable="false" class="octicon octicon-tag" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M1 7.775V2.75C1 1.784 1.784 1 2.75 1h5.025c.464 0 .91.184 1.238.513l6.25 6.25a1.75 1.75 0 0 1 0 2.474l-5.026 5.026a1.75 1.75 0 0 1-2.474 0l-6.25-6.25A1.752 1.752 0 0 1 1 7.775Zm1.5 0c0 .066.026.13.073.177l6.25 6.25a.25.25 0 0 0 .354 0l5.025-5.025a.25.25 0 0 0 0-.354l-6.25-6.25a.25.25 0 0 0-.177-.073H2.75a.25.25 0 0 0-.25.25ZM6 5a1 1 0 1 1 0 2 1 1 0 0 1 0-2Z"></path></svg></a></div></div><div class="OverviewContent-module__Box_6--wV7Tw"><div class="OverviewContent-module__Box_7--SbxdI"><button hidden="" data-hotkey="t,Shift+T"></button><div class="OverviewContent-module__Box_8--oumpR"><div class="Box-sc-g0xbh4-0 OverviewContent-module__FileResultsList--irMg6 FileResultsList-module__Box_1--ZnWjQ"><span class="FileResultsList-module__FilesSearchBox--J5FtW FilesSearchBox-module__TextInput--LKpMn TextInput-wrapper prc-components-TextInputWrapper-i1ofR prc-components-TextInputBaseWrapper-ueK9q" data-leading-visual="true" data-trailing-visual="true" aria-busy="false"><span class="TextInput-icon" id=":r32:" aria-hidden="true"><svg aria-hidden="true" focusable="false" class="octicon octicon-search" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M10.68 11.74a6 6 0 0 1-7.922-8.982 6 6 0 0 1 8.982 7.922l3.04 3.04a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215ZM11.5 7a4.499 4.499 0 1 0-8.997 0A4.499 4.499 0 0 0 11.5 7Z"></path></svg></span><input type="text" aria-label="Go to file" autocorrect="off" spellcheck="false" placeholder="Go to file" aria-describedby=":r32: :r33:" data-component="input" class="prc-components-Input-Ic-y8" value=""><span class="TextInput-icon" id=":r33:" aria-hidden="true"><div class="FilesSearchBox-module__Box--Ye6rL"><kbd>t</kbd></div></span></span></div></div><div class="OverviewContent-module__Box_9--mQYON"><button type="button" class="prc-Button-ButtonBase-c50BI" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="default" aria-describedby=":r36:-loading-announcement"><span data-component="buttonContent" data-align="center" class="prc-Button-ButtonContent-HKbr-"><span data-component="text" class="prc-Button-Label-pTQ3x">Go to file</span></span></button></div><div class="react-directory-add-file-icon"><h2 class="sr-only ScreenReaderHeading-module__userSelectNone--vW4Cq prc-Heading-Heading-6CmGO" data-testid="screen-reader-heading">Add file</h2><button data-component="IconButton" type="button" aria-haspopup="true" aria-expanded="false" tabindex="0" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="default" aria-describedby=":r37:-loading-announcement" aria-labelledby=":r39:" id=":r37:"><svg aria-hidden="true" focusable="false" class="octicon octicon-plus" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M7.75 2a.75.75 0 0 1 .75.75V7h4.25a.75.75 0 0 1 0 1.5H8.5v4.25a.75.75 0 0 1-1.5 0V8.5H2.75a.75.75 0 0 1 0-1.5H7V2.75A.75.75 0 0 1 7.75 2Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r39:" popover="auto">Add file</span></div><div class="react-directory-remove-file-icon"><h2 class="sr-only ScreenReaderHeading-module__userSelectNone--vW4Cq prc-Heading-Heading-6CmGO" data-testid="screen-reader-heading">Add file</h2><button type="button" aria-haspopup="true" aria-expanded="false" tabindex="0" class="prc-Button-ButtonBase-c50BI" data-loading="false" data-size="medium" data-variant="default" aria-describedby=":r3b:-loading-announcement" id=":r3b:"><span data-component="buttonContent" data-align="center" class="prc-Button-ButtonContent-HKbr-"><span data-component="text" class="prc-Button-Label-pTQ3x">Add file</span></span><span data-component="trailingAction" class="prc-Button-Visual-2epfX prc-Button-VisualWrap-Db-eB"><svg aria-hidden="true" focusable="false" class="octicon octicon-triangle-down" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path></svg></span></button></div></div><button type="button" aria-haspopup="true" aria-expanded="false" tabindex="0" class="prc-Button-ButtonBase-c50BI" data-loading="false" data-size="medium" data-variant="primary" aria-describedby=":r3e:-loading-announcement" id=":r3e:"><span data-component="buttonContent" data-align="center" class="prc-Button-ButtonContent-HKbr-"><span data-component="leadingVisual" class="prc-Button-Visual-2epfX prc-Button-VisualWrap-Db-eB"><svg aria-hidden="true" focusable="false" class="octicon octicon-code hide-sm" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="m11.28 3.22 4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.749.749 0 0 1-1.275-.326.749.749 0 0 1 .215-.734L13.94 8l-3.72-3.72a.749.749 0 0 1 .326-1.275.749.749 0 0 1 .734.215Zm-6.56 0a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042L2.06 8l3.72 3.72a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L.47 8.53a.75.75 0 0 1 0-1.06Z"></path></svg></span><span data-component="text" class="prc-Button-Label-pTQ3x">Code</span><span data-component="trailingVisual" class="prc-Button-Visual-2epfX prc-Button-VisualWrap-Db-eB"><svg aria-hidden="true" focusable="false" class="octicon octicon-triangle-down" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path></svg></span></span></button><div class="OverviewContent-module__Box_10--ULKAG"><button data-component="IconButton" type="button" aria-haspopup="true" aria-expanded="false" tabindex="0" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="default" aria-describedby=":r3g:-loading-announcement" aria-labelledby=":r3i:" id=":r3g:"><svg aria-hidden="true" focusable="false" class="octicon octicon-kebab-horizontal" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M8 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3ZM1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Zm13 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="n" aria-hidden="true" id=":r3i:" popover="auto">Open more actions menu</span></div></div></div><div class="OverviewContent-module__Box_11--Tqhu2"><div data-hpc="true"><button hidden="" data-testid="focus-next-element-button" data-hotkey="j"></button><button hidden="" data-testid="focus-previous-element-button" data-hotkey="k"></button><h2 class="sr-only ScreenReaderHeading-module__userSelectNone--vW4Cq prc-Heading-Heading-6CmGO" data-testid="screen-reader-heading" id="folders-and-files">Folders and files</h2><table class="Table-module__Box--h4W6R DirectoryContent-module__Table--DNJx9" aria-labelledby="folders-and-files"><thead class="DirectoryContent-module__OverviewHeaderRow--W8yGl Table-module__Box_1--JrPYF"><tr class="Table-module__Box_2--kJgvd"><th colspan="2" class="DirectoryContent-module__Box--J2MQZ"><span class="text-bold">Name</span></th><th colspan="1" class="DirectoryContent-module__Box_1--mB8B7"><span class="text-bold">Name</span></th><th class="hide-sm"><div class="width-fit prc-Truncate-Truncate-A9Wn6" data-inline="true" title="Last commit message" style="--truncate-max-width: 125px;"><span class="text-bold">Last commit message</span></div></th><th colspan="1" class="DirectoryContent-module__Box_2--LsXd4"><div class="width-fit prc-Truncate-Truncate-A9Wn6" data-inline="true" title="Last commit date" style="--truncate-max-width: 125px;"><span class="text-bold">Last commit date</span></div></th></tr></thead><tbody><tr class="DirectoryContent-module__Box_3--BoinM"><td colspan="3" class="bgColor-muted p-1 rounded-top-2"><div class="LatestCommit-module__Box--En0AE"><h2 class="sr-only ScreenReaderHeading-module__userSelectNone--vW4Cq prc-Heading-Heading-6CmGO" data-testid="screen-reader-heading">Latest commit</h2><div data-testid="latest-commit" class="LatestCommit-module__Box_1--Kkzat"><div class="CommitAttribution-module__CommitAttributionContainer--dZiJ_"><div data-testid="author-avatar" class="Box-sc-g0xbh4-0 AuthorAvatar-module__AuthorAvatarContainer--NQwZ2"><a class="prc-Link-Link-85e08" href="/khanhnguyenvoy" data-testid="avatar-icon-link" data-hovercard-url="/users/khanhnguyenvoy/hovercard" aria-keyshortcuts="Alt+ArrowUp"><img data-component="Avatar" class="AuthorAvatar-module__GitHubAvatar--Bx7dK prc-Avatar-Avatar-ZRS-m" alt="khanhnguyenvoy" width="20" height="20" src="https://avatars.githubusercontent.com/u/106717845?v=4&amp;size=40" data-testid="github-avatar" aria-label="khanhnguyenvoy" style="--avatarSize-regular: 20px;"></a><a class="Box-sc-g0xbh4-0 kVizpJ AuthorAvatar-module__authorHoverableLink--ED3Do prc-Link-Link-85e08" data-muted="true" href="/nduykhanh/basic-key/commits?author=khanhnguyenvoy" aria-label="commits by khanhnguyenvoy" data-hovercard-url="/users/khanhnguyenvoy/hovercard" aria-keyshortcuts="Alt+ArrowUp">khanhnguyenvoy</a></div><span class=""></span></div><div class="d-none d-sm-flex LatestCommit-module__Box_2--gAJMD"><div class="Truncate flex-items-center f5"><span class="Truncate-text prc-Text-Text-0ima0" data-testid="latest-commit-html"><a href="/nduykhanh/basic-key/commit/eeff703ad0e936fd0d7d144ad78e24bd4991f43f" class="Link--secondary" data-pjax="true" data-hovercard-url="/nduykhanh/basic-key/commit/eeff703ad0e936fd0d7d144ad78e24bd4991f43f/hovercard" aria-keyshortcuts="Alt+ArrowUp">Merge remote-tracking branch 'refs/remotes/origin/main'</a></span></div></div><span class="d-flex d-sm-none fgColor-muted f6"><relative-time class="sc-aXZVg" tense="past" datetime="2025-01-10T06:22:02.000Z" title="Jan 10, 2025, 1:22 PM GMT+7">Jan 10, 2025</relative-time></span></div><div class="d-flex flex-shrink-0 gap-2"><div data-testid="latest-commit-details" class="d-none d-sm-flex flex-items-center"><span class="d-flex flex-nowrap fgColor-muted f6"><a class="Link--secondary prc-Link-Link-85e08" aria-label="Commit eeff703" data-hovercard-url="/nduykhanh/basic-key/commit/eeff703ad0e936fd0d7d144ad78e24bd4991f43f/hovercard" href="/nduykhanh/basic-key/commit/eeff703ad0e936fd0d7d144ad78e24bd4991f43f" data-discover="true" aria-keyshortcuts="Alt+ArrowUp">eeff703</a>&nbsp;·&nbsp;<relative-time class="sc-aXZVg" tense="past" datetime="2025-01-10T06:22:02.000Z" title="Jan 10, 2025, 1:22 PM GMT+7">Jan 10, 2025</relative-time></span></div><div class="d-flex gap-2"><h2 class="sr-only ScreenReaderHeading-module__userSelectNone--vW4Cq prc-Heading-Heading-6CmGO" data-testid="screen-reader-heading">History</h2><a href="/nduykhanh/basic-key/commits/main/" class="prc-Button-ButtonBase-c50BI d-none d-lg-flex LinkButton-module__code-view-link-button--xvCGA flex-items-center fgColor-default" data-loading="false" data-size="small" data-variant="invisible" aria-describedby=":r3k:-loading-announcement"><span data-component="buttonContent" data-align="center" class="prc-Button-ButtonContent-HKbr-"><span data-component="leadingVisual" class="prc-Button-Visual-2epfX prc-Button-VisualWrap-Db-eB"><svg aria-hidden="true" focusable="false" class="octicon octicon-history" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="m.427 1.927 1.215 1.215a8.002 8.002 0 1 1-1.6 5.685.75.75 0 1 1 1.493-.154 6.5 6.5 0 1 0 1.18-4.458l1.358 1.358A.25.25 0 0 1 3.896 6H.25A.25.25 0 0 1 0 5.75V2.104a.25.25 0 0 1 .427-.177ZM7.75 4a.75.75 0 0 1 .75.75v2.992l2.028.812a.75.75 0 0 1-.557 1.392l-2.5-1A.751.751 0 0 1 7 8.25v-3.5A.75.75 0 0 1 7.75 4Z"></path></svg></span><span data-component="text" class="prc-Button-Label-pTQ3x"><span class="fgColor-default">14 Commits</span></span></span></a><div class="d-sm-none"><button data-component="IconButton" type="button" aria-pressed="false" aria-expanded="false" data-testid="latest-commit-details-toggle" class="prc-Button-ButtonBase-c50BI LatestCommit-module__IconButton--jJLCx prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":r45:-loading-announcement" aria-labelledby=":r44:"><svg aria-hidden="true" focusable="false" class="octicon octicon-ellipsis" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M0 5.75C0 4.784.784 4 1.75 4h12.5c.966 0 1.75.784 1.75 1.75v4.5A1.75 1.75 0 0 1 14.25 12H1.75A1.75 1.75 0 0 1 0 10.25ZM12 7a1 1 0 1 0 0 2 1 1 0 0 0 0-2ZM7 8a1 1 0 1 0 2 0 1 1 0 0 0-2 0ZM4 7a1 1 0 1 0 0 2 1 1 0 0 0 0-2Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r44:" popover="auto">Open commit details</span></div><div class="d-flex d-lg-none"><span role="tooltip" aria-label="14 Commits" id="history-icon-button-tooltip" class="Tooltip__TooltipBase-sc-17tf59c-0 fiSvBN tooltipped-n"><a aria-label="View commit history for this file." href="/nduykhanh/basic-key/commits/main/" class="prc-Button-ButtonBase-c50BI LinkButton-module__code-view-link-button--xvCGA flex-items-center fgColor-default" data-loading="false" data-size="small" data-variant="invisible" aria-describedby=":r3m:-loading-announcement history-icon-button-tooltip"><span data-component="buttonContent" data-align="center" class="prc-Button-ButtonContent-HKbr-"><span data-component="leadingVisual" class="prc-Button-Visual-2epfX prc-Button-VisualWrap-Db-eB"><svg aria-hidden="true" focusable="false" class="octicon octicon-history" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="m.427 1.927 1.215 1.215a8.002 8.002 0 1 1-1.6 5.685.75.75 0 1 1 1.493-.154 6.5 6.5 0 1 0 1.18-4.458l1.358 1.358A.25.25 0 0 1 3.896 6H.25A.25.25 0 0 1 0 5.75V2.104a.25.25 0 0 1 .427-.177ZM7.75 4a.75.75 0 0 1 .75.75v2.992l2.028.812a.75.75 0 0 1-.557 1.392l-2.5-1A.751.751 0 0 1 7 8.25v-3.5A.75.75 0 0 1 7.75 4Z"></path></svg></span></span></a></span></div></div></div></div></td></tr><tr class="react-directory-row undefined" id="folder-row-0"><td class="react-directory-row-name-cell-small-screen" colspan="2"><div class="react-directory-filename-column"><svg aria-hidden="true" focusable="false" class="octicon octicon-file-directory-fill icon-directory" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M1.75 1A1.75 1.75 0 0 0 0 2.75v10.5C0 14.216.784 15 1.75 15h12.5A1.75 1.75 0 0 0 16 13.25v-8.5A1.75 1.75 0 0 0 14.25 3H7.5a.25.25 0 0 1-.2-.1l-.9-1.2C6.07 1.26 5.55 1 5 1H1.75Z"></path></svg><div class="overflow-hidden"><div class="react-directory-filename-cell"><div class="react-directory-truncate"><a title="API" aria-label="API, (Directory)" class="Link--primary" href="/nduykhanh/basic-key/tree/main/API" data-discover="true">API</a></div></div></div></div></td><td class="react-directory-row-name-cell-large-screen" colspan="1"><div class="react-directory-filename-column"><svg aria-hidden="true" focusable="false" class="octicon octicon-file-directory-fill icon-directory" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M1.75 1A1.75 1.75 0 0 0 0 2.75v10.5C0 14.216.784 15 1.75 15h12.5A1.75 1.75 0 0 0 16 13.25v-8.5A1.75 1.75 0 0 0 14.25 3H7.5a.25.25 0 0 1-.2-.1l-.9-1.2C6.07 1.26 5.55 1 5 1H1.75Z"></path></svg><div class="overflow-hidden"><div class="react-directory-filename-cell"><div class="react-directory-truncate"><a title="API" aria-label="API, (Directory)" class="Link--primary" href="/nduykhanh/basic-key/tree/main/API" data-discover="true">API</a></div></div></div></div></td><td class="react-directory-row-commit-cell"><div><div class="react-directory-commit-message"><a data-pjax="true" title="fix: FTNotification" class="Link--secondary" href="/nduykhanh/basic-key/commit/546950a82cde618bba7b8b806bb8b5627c1a2a41">fix: FTNotification</a></div></div></td><td><div class="react-directory-commit-age"><relative-time class="sc-aXZVg" tense="past" datetime="2025-01-10T06:20:40.000Z" title="Jan 10, 2025, 1:20 PM GMT+7">Jan 10, 2025</relative-time></div></td></tr><tr class="react-directory-row undefined" id="folder-row-1"><td class="react-directory-row-name-cell-small-screen" colspan="2"><div class="react-directory-filename-column"><svg aria-hidden="true" focusable="false" class="octicon octicon-file-directory-fill icon-directory" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M1.75 1A1.75 1.75 0 0 0 0 2.75v10.5C0 14.216.784 15 1.75 15h12.5A1.75 1.75 0 0 0 16 13.25v-8.5A1.75 1.75 0 0 0 14.25 3H7.5a.25.25 0 0 1-.2-.1l-.9-1.2C6.07 1.26 5.55 1 5 1H1.75Z"></path></svg><div class="overflow-hidden"><div class="react-directory-filename-cell"><div class="react-directory-truncate"><a title="Resources" aria-label="Resources, (Directory)" class="Link--primary" href="/nduykhanh/basic-key/tree/main/Resources" data-discover="true">Resources</a></div></div></div></div></td><td class="react-directory-row-name-cell-large-screen" colspan="1"><div class="react-directory-filename-column"><svg aria-hidden="true" focusable="false" class="octicon octicon-file-directory-fill icon-directory" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M1.75 1A1.75 1.75 0 0 0 0 2.75v10.5C0 14.216.784 15 1.75 15h12.5A1.75 1.75 0 0 0 16 13.25v-8.5A1.75 1.75 0 0 0 14.25 3H7.5a.25.25 0 0 1-.2-.1l-.9-1.2C6.07 1.26 5.55 1 5 1H1.75Z"></path></svg><div class="overflow-hidden"><div class="react-directory-filename-cell"><div class="react-directory-truncate"><a title="Resources" aria-label="Resources, (Directory)" class="Link--primary" href="/nduykhanh/basic-key/tree/main/Resources" data-discover="true">Resources</a></div></div></div></div></td><td class="react-directory-row-commit-cell"><div><div class="react-directory-commit-message"><a data-pjax="true" title="feat: intergrate theos" class="Link--secondary" href="/nduykhanh/basic-key/commit/6743004681801d3732c9e3026929d45aa9da7a44">feat: intergrate theos</a></div></div></td><td><div class="react-directory-commit-age"><relative-time class="sc-aXZVg" tense="past" datetime="2024-08-16T13:42:51.000Z" title="Aug 16, 2024, 8:42 PM GMT+7">Aug 16, 2024</relative-time></div></td></tr><tr class="react-directory-row undefined" id="folder-row-2"><td class="react-directory-row-name-cell-small-screen" colspan="2"><div class="react-directory-filename-column"><svg aria-hidden="true" focusable="false" class="octicon octicon-file color-fg-muted" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg><div class="overflow-hidden"><div class="react-directory-filename-cell"><div class="react-directory-truncate"><a title=".gitignore" aria-label=".gitignore, (File)" class="Link--primary" href="/nduykhanh/basic-key/blob/main/.gitignore" data-discover="true">.gitignore</a></div></div></div></div></td><td class="react-directory-row-name-cell-large-screen" colspan="1"><div class="react-directory-filename-column"><svg aria-hidden="true" focusable="false" class="octicon octicon-file color-fg-muted" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg><div class="overflow-hidden"><div class="react-directory-filename-cell"><div class="react-directory-truncate"><a title=".gitignore" aria-label=".gitignore, (File)" class="Link--primary" href="/nduykhanh/basic-key/blob/main/.gitignore" data-discover="true">.gitignore</a></div></div></div></div></td><td class="react-directory-row-commit-cell"><div><div class="react-directory-commit-message"><a data-pjax="true" title="feat: intergrate theos" class="Link--secondary" href="/nduykhanh/basic-key/commit/6743004681801d3732c9e3026929d45aa9da7a44">feat: intergrate theos</a></div></div></td><td><div class="react-directory-commit-age"><relative-time class="sc-aXZVg" tense="past" datetime="2024-08-16T13:42:51.000Z" title="Aug 16, 2024, 8:42 PM GMT+7">Aug 16, 2024</relative-time></div></td></tr><tr class="react-directory-row undefined" id="folder-row-3"><td class="react-directory-row-name-cell-small-screen" colspan="2"><div class="react-directory-filename-column"><svg aria-hidden="true" focusable="false" class="octicon octicon-file color-fg-muted" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg><div class="overflow-hidden"><div class="react-directory-filename-cell"><div class="react-directory-truncate"><a title="BasicKey.plist" aria-label="BasicKey.plist, (File)" class="Link--primary" href="/nduykhanh/basic-key/blob/main/BasicKey.plist" data-discover="true">BasicKey.plist</a></div></div></div></div></td><td class="react-directory-row-name-cell-large-screen" colspan="1"><div class="react-directory-filename-column"><svg aria-hidden="true" focusable="false" class="octicon octicon-file color-fg-muted" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg><div class="overflow-hidden"><div class="react-directory-filename-cell"><div class="react-directory-truncate"><a title="BasicKey.plist" aria-label="BasicKey.plist, (File)" class="Link--primary" href="/nduykhanh/basic-key/blob/main/BasicKey.plist" data-discover="true">BasicKey.plist</a></div></div></div></div></td><td class="react-directory-row-commit-cell"><div><div class="react-directory-commit-message"><a data-pjax="true" title="feat: intergrate theos" class="Link--secondary" href="/nduykhanh/basic-key/commit/6743004681801d3732c9e3026929d45aa9da7a44">feat: intergrate theos</a></div></div></td><td><div class="react-directory-commit-age"><relative-time class="sc-aXZVg" tense="past" datetime="2024-08-16T13:42:51.000Z" title="Aug 16, 2024, 8:42 PM GMT+7">Aug 16, 2024</relative-time></div></td></tr><tr class="react-directory-row undefined" id="folder-row-4"><td class="react-directory-row-name-cell-small-screen" colspan="2"><div class="react-directory-filename-column"><svg aria-hidden="true" focusable="false" class="octicon octicon-file color-fg-muted" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg><div class="overflow-hidden"><div class="react-directory-filename-cell"><div class="react-directory-truncate"><a title="Makefile" aria-label="Makefile, (File)" class="Link--primary" href="/nduykhanh/basic-key/blob/main/Makefile" data-discover="true">Makefile</a></div></div></div></div></td><td class="react-directory-row-name-cell-large-screen" colspan="1"><div class="react-directory-filename-column"><svg aria-hidden="true" focusable="false" class="octicon octicon-file color-fg-muted" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg><div class="overflow-hidden"><div class="react-directory-filename-cell"><div class="react-directory-truncate"><a title="Makefile" aria-label="Makefile, (File)" class="Link--primary" href="/nduykhanh/basic-key/blob/main/Makefile" data-discover="true">Makefile</a></div></div></div></div></td><td class="react-directory-row-commit-cell"><div><div class="react-directory-commit-message"><a data-pjax="true" title="feat: intergrate theos" class="Link--secondary" href="/nduykhanh/basic-key/commit/6743004681801d3732c9e3026929d45aa9da7a44">feat: intergrate theos</a></div></div></td><td><div class="react-directory-commit-age"><relative-time class="sc-aXZVg" tense="past" datetime="2024-08-16T13:42:51.000Z" title="Aug 16, 2024, 8:42 PM GMT+7">Aug 16, 2024</relative-time></div></td></tr><tr class="react-directory-row undefined" id="folder-row-5"><td class="react-directory-row-name-cell-small-screen" colspan="2"><div class="react-directory-filename-column"><svg aria-hidden="true" focusable="false" class="octicon octicon-file color-fg-muted" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg><div class="overflow-hidden"><div class="react-directory-filename-cell"><div class="react-directory-truncate"><a title="Makefile_dylib" aria-label="Makefile_dylib, (File)" class="Link--primary" href="/nduykhanh/basic-key/blob/main/Makefile_dylib" data-discover="true">Makefile_dylib</a></div></div></div></div></td><td class="react-directory-row-name-cell-large-screen" colspan="1"><div class="react-directory-filename-column"><svg aria-hidden="true" focusable="false" class="octicon octicon-file color-fg-muted" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg><div class="overflow-hidden"><div class="react-directory-filename-cell"><div class="react-directory-truncate"><a title="Makefile_dylib" aria-label="Makefile_dylib, (File)" class="Link--primary" href="/nduykhanh/basic-key/blob/main/Makefile_dylib" data-discover="true">Makefile_dylib</a></div></div></div></div></td><td class="react-directory-row-commit-cell"><div><div class="react-directory-commit-message"><a data-pjax="true" title="feat: intergrate theos" class="Link--secondary" href="/nduykhanh/basic-key/commit/6743004681801d3732c9e3026929d45aa9da7a44">feat: intergrate theos</a></div></div></td><td><div class="react-directory-commit-age"><relative-time class="sc-aXZVg" tense="past" datetime="2024-08-16T13:42:51.000Z" title="Aug 16, 2024, 8:42 PM GMT+7">Aug 16, 2024</relative-time></div></td></tr><tr class="react-directory-row undefined" id="folder-row-6"><td class="react-directory-row-name-cell-small-screen" colspan="2"><div class="react-directory-filename-column"><svg aria-hidden="true" focusable="false" class="octicon octicon-file color-fg-muted" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg><div class="overflow-hidden"><div class="react-directory-filename-cell"><div class="react-directory-truncate"><a title="Obfuscate.h" aria-label="Obfuscate.h, (File)" class="Link--primary" href="/nduykhanh/basic-key/blob/main/Obfuscate.h" data-discover="true">Obfuscate.h</a></div></div></div></div></td><td class="react-directory-row-name-cell-large-screen" colspan="1"><div class="react-directory-filename-column"><svg aria-hidden="true" focusable="false" class="octicon octicon-file color-fg-muted" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg><div class="overflow-hidden"><div class="react-directory-filename-cell"><div class="react-directory-truncate"><a title="Obfuscate.h" aria-label="Obfuscate.h, (File)" class="Link--primary" href="/nduykhanh/basic-key/blob/main/Obfuscate.h" data-discover="true">Obfuscate.h</a></div></div></div></div></td><td class="react-directory-row-commit-cell"><div><div class="react-directory-commit-message"><a data-pjax="true" title="feat: intergrate theos" class="Link--secondary" href="/nduykhanh/basic-key/commit/6743004681801d3732c9e3026929d45aa9da7a44">feat: intergrate theos</a></div></div></td><td><div class="react-directory-commit-age"><relative-time class="sc-aXZVg" tense="past" datetime="2024-08-16T13:42:51.000Z" title="Aug 16, 2024, 8:42 PM GMT+7">Aug 16, 2024</relative-time></div></td></tr><tr class="react-directory-row undefined" id="folder-row-7"><td class="react-directory-row-name-cell-small-screen" colspan="2"><div class="react-directory-filename-column"><svg aria-hidden="true" focusable="false" class="octicon octicon-file color-fg-muted" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg><div class="overflow-hidden"><div class="react-directory-filename-cell"><div class="react-directory-truncate"><a title="README.md" aria-label="README.md, (File)" class="Link--primary" href="/nduykhanh/basic-key/blob/main/README.md" data-discover="true">README.md</a></div></div></div></div></td><td class="react-directory-row-name-cell-large-screen" colspan="1"><div class="react-directory-filename-column"><svg aria-hidden="true" focusable="false" class="octicon octicon-file color-fg-muted" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg><div class="overflow-hidden"><div class="react-directory-filename-cell"><div class="react-directory-truncate"><a title="README.md" aria-label="README.md, (File)" class="Link--primary" href="/nduykhanh/basic-key/blob/main/README.md" data-discover="true">README.md</a></div></div></div></div></td><td class="react-directory-row-commit-cell"><div><div class="react-directory-commit-message"><a data-pjax="true" title="Update README.md" class="Link--secondary" href="/nduykhanh/basic-key/commit/8ee5f64aa55d56f5e125964b33eea123fd943c8d">Update README.md</a></div></div></td><td><div class="react-directory-commit-age"><relative-time class="sc-aXZVg" tense="past" datetime="2024-09-08T09:48:21.000Z" title="Sep 8, 2024, 4:48 PM GMT+7">Sep 8, 2024</relative-time></div></td></tr><tr class="react-directory-row undefined" id="folder-row-8"><td class="react-directory-row-name-cell-small-screen" colspan="2"><div class="react-directory-filename-column"><svg aria-hidden="true" focusable="false" class="octicon octicon-file color-fg-muted" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg><div class="overflow-hidden"><div class="react-directory-filename-cell"><div class="react-directory-truncate"><a title="Tweak.xm" aria-label="Tweak.xm, (File)" class="Link--primary" href="/nduykhanh/basic-key/blob/main/Tweak.xm" data-discover="true">Tweak.xm</a></div></div></div></div></td><td class="react-directory-row-name-cell-large-screen" colspan="1"><div class="react-directory-filename-column"><svg aria-hidden="true" focusable="false" class="octicon octicon-file color-fg-muted" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg><div class="overflow-hidden"><div class="react-directory-filename-cell"><div class="react-directory-truncate"><a title="Tweak.xm" aria-label="Tweak.xm, (File)" class="Link--primary" href="/nduykhanh/basic-key/blob/main/Tweak.xm" data-discover="true">Tweak.xm</a></div></div></div></div></td><td class="react-directory-row-commit-cell"><div><div class="react-directory-commit-message"><a data-pjax="true" title="fix: Update Tweak.xm" class="Link--secondary" href="/nduykhanh/basic-key/commit/d70d24f3837f475fbf9d5bbd426b9524d13cf795">fix: Update Tweak.xm</a></div></div></td><td><div class="react-directory-commit-age"><relative-time class="sc-aXZVg" tense="past" datetime="2024-08-17T09:44:23.000Z" title="Aug 17, 2024, 4:44 PM GMT+7">Aug 17, 2024</relative-time></div></td></tr><tr class="react-directory-row undefined" id="folder-row-9"><td class="react-directory-row-name-cell-small-screen" colspan="2"><div class="react-directory-filename-column"><svg aria-hidden="true" focusable="false" class="octicon octicon-file color-fg-muted" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg><div class="overflow-hidden"><div class="react-directory-filename-cell"><div class="react-directory-truncate"><a title="control" aria-label="control, (File)" class="Link--primary" href="/nduykhanh/basic-key/blob/main/control" data-discover="true">control</a></div></div></div></div></td><td class="react-directory-row-name-cell-large-screen" colspan="1"><div class="react-directory-filename-column"><svg aria-hidden="true" focusable="false" class="octicon octicon-file color-fg-muted" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg><div class="overflow-hidden"><div class="react-directory-filename-cell"><div class="react-directory-truncate"><a title="control" aria-label="control, (File)" class="Link--primary" href="/nduykhanh/basic-key/blob/main/control" data-discover="true">control</a></div></div></div></div></td><td class="react-directory-row-commit-cell"><div><div class="react-directory-commit-message"><a data-pjax="true" title="feat: intergrate theos" class="Link--secondary" href="/nduykhanh/basic-key/commit/6743004681801d3732c9e3026929d45aa9da7a44">feat: intergrate theos</a></div></div></td><td><div class="react-directory-commit-age"><relative-time class="sc-aXZVg" tense="past" datetime="2024-08-16T13:42:51.000Z" title="Aug 16, 2024, 8:42 PM GMT+7">Aug 16, 2024</relative-time></div></td></tr><tr class="d-none DirectoryContent-module__Box_4--EzUVO" data-testid="view-all-files-row"><td colspan="3" class="DirectoryContent-module__Box_5--r9c8e"><div><button class="prc-Link-Link-85e08">View all files</button></div></td></tr></tbody></table></div><div class="OverviewRepoFiles-module__Box_1--xSt0T"><div class="OverviewRepoFiles-module__Box_2--yIjMp"><div itemscope="" itemtype="https://schema.org/abstract" class="OverviewRepoFiles-module__Box_3--Bi2jM"><h2 class="prc-src-InternalVisuallyHidden-nlR9R">Repository files navigation</h2><nav class="prc-components-UnderlineWrapper-oOh5J OverviewRepoFiles-module__UnderlineNav--BHfFi" aria-label="Repository files" data-variant="inset"><ul class="prc-components-UnderlineItemList-b23Hf" role="list"><li class="Box-sc-g0xbh4-0 hUCRAk"><a class="prc-components-UnderlineItem-lJsg-" href="#" aria-current="page"><span data-component="icon"><svg aria-hidden="true" focusable="false" class="octicon octicon-book" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M0 1.75A.75.75 0 0 1 .75 1h4.253c1.227 0 2.317.59 3 1.501A3.743 3.743 0 0 1 11.006 1h4.245a.75.75 0 0 1 .75.75v10.5a.75.75 0 0 1-.75.75h-4.507a2.25 2.25 0 0 0-1.591.659l-.622.621a.75.75 0 0 1-1.06 0l-.622-.621A2.25 2.25 0 0 0 5.258 13H.75a.75.75 0 0 1-.75-.75Zm7.251 10.324.004-5.073-.002-2.253A2.25 2.25 0 0 0 5.003 2.5H1.5v9h3.757a3.75 3.75 0 0 1 1.994.574ZM8.755 4.75l-.004 7.322a3.752 3.752 0 0 1 1.992-.572H14.5v-9h-3.495a2.25 2.25 0 0 0-2.25 2.25Z"></path></svg></span><span data-component="text" data-content="README">README</span></a></li></ul></nav><button data-component="IconButton" type="button" title="Edit file" class="Box-sc-g0xbh4-0 ecwqhm prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":r3p:-loading-announcement" aria-labelledby=":r3o:" data-hotkey="e,Shift+E"><svg aria-hidden="true" focusable="false" class="octicon octicon-pencil" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M11.013 1.427a1.75 1.75 0 0 1 2.474 0l1.086 1.086a1.75 1.75 0 0 1 0 2.474l-8.61 8.61c-.21.21-.47.364-.756.445l-3.251.93a.75.75 0 0 1-.927-.928l.929-3.25c.081-.286.235-.547.445-.758l8.61-8.61Zm.176 4.823L9.75 4.81l-6.286 6.287a.253.253 0 0 0-.064.108l-.558 1.953 1.953-.558a.253.253 0 0 0 .108-.064Zm1.238-3.763a.25.25 0 0 0-.354 0L10.811 3.75l1.439 1.44 1.263-1.263a.25.25 0 0 0 0-.354Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r3o:" popover="auto">Edit file</span><button type="button" aria-label="Outline" aria-haspopup="true" aria-expanded="false" tabindex="0" class="prc-Button-ButtonBase-c50BI OverviewRepoFiles-module__ActionMenu_Button--xB9DS" data-loading="false" data-size="medium" data-variant="invisible" aria-describedby=":r3q:-loading-announcement" id=":r3q:"><svg aria-hidden="true" focusable="false" class="octicon octicon-list-unordered" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M5.75 2.5h8.5a.75.75 0 0 1 0 1.5h-8.5a.75.75 0 0 1 0-1.5Zm0 5h8.5a.75.75 0 0 1 0 1.5h-8.5a.75.75 0 0 1 0-1.5Zm0 5h8.5a.75.75 0 0 1 0 1.5h-8.5a.75.75 0 0 1 0-1.5ZM2 14a1 1 0 1 1 0-2 1 1 0 0 1 0 2Zm1-6a1 1 0 1 1-2 0 1 1 0 0 1 2 0ZM2 4a1 1 0 1 1 0-2 1 1 0 0 1 0 2Z"></path></svg></button></div><div class="Box-sc-g0xbh4-0 js-snippet-clipboard-copy-unpositioned DirectoryRichtextContent-module__SharedMarkdownContent--YORdJ" data-hpc="true"><article class="markdown-body entry-content container-lg" itemprop="text"><div class="markdown-heading" dir="auto"><h1 tabindex="-1" class="heading-element" dir="auto">Basic Key</h1><a id="user-content-basic-key" class="anchor" aria-label="Permalink: Basic Key" href="#basic-key"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<p dir="auto"><a href="https://key.getbasic.link" rel="nofollow">Server Key</a> một sản phẩm của <a href="https://getbasic.link/" rel="nofollow">GetBasic.link</a></p>
<p dir="auto">Tích hợp menu key được dùng để tiêm vào .IPA cho mục đích quản lý người dùng truy cập vào ứng dụng. Hỗ trợ build .dylib và .framework với <a href="https://theos.dev/" rel="nofollow">THEOS</a>.</p>
<p dir="auto">Demo: <a href="https://testflight.apple.com/join/aR61BWFh" rel="nofollow">https://testflight.apple.com/join/aR61BWFh</a></p>
<div class="markdown-heading" dir="auto"><h1 tabindex="-1" class="heading-element" dir="auto">Installation</h1><a id="user-content-installation" class="anchor" aria-label="Permalink: Installation" href="#installation"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<ul dir="auto">
<li>Cài đặt <a href="https://theos.dev/" rel="nofollow">THEOS</a> trên máy tính hoặc trên điện thoại của bạn.</li>
<li>Tải Basic Key version mới nhất về tại mục <a href="https://github.com/nduykhanh/basic-key/releases">Release</a> và giải nén.</li>
<li>Đăng kí tài khoản tại <a href="https://key.getbasic.link/" rel="nofollow">Basic key</a> và tạo package.</li>
<li>Copy token của package và thay thế thông tin YOUR_TOKEN trong file <a href="https://github.com/nduykhanh/basic-key/blob/main/Tweak.xm">Tweak.xm</a></li>
<li>Tuỳ chỉnh setRealUdidMode là true hoặc false tuỳ vào chế độ của package: true cho real udid và false cho fake udid</li>
<li>Bên trong hàm paid có thể load thư viện bên thứ 3 như Mod Menu sau khi nhập key thành công. Không dùng giữ nguyên.</li>
</ul>
<div class="highlight highlight-source-c++ notranslate position-relative overflow-auto" dir="auto"><pre>#<span class="pl-k">import</span> <span class="pl-s"><span class="pl-pds">"</span>API/BasicKey.h<span class="pl-pds">"</span></span>
#<span class="pl-k">import</span> <span class="pl-s"><span class="pl-pds">"</span>Obfuscate.h<span class="pl-pds">"</span></span>
#<span class="pl-k">define</span> <span class="pl-en">timer</span>(<span class="pl-v">sec</span>) dispatch_after(dispatch_time(DISPATCH_TIME_NOW, sec * NSEC_PER_SEC), dispatch_get_main_queue(), ^

<span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">didFinishLaunching</span>(CFNotificationCenterRef center, <span class="pl-k">void</span> *observer, CFStringRef name, <span class="pl-k">const</span> <span class="pl-k">void</span> *object, CFDictionaryRef info) {
  BasicKey *API = [[BasicKey alloc] init];
  [API setToken:@<span class="pl-s"><span class="pl-pds">"</span>YOUR_TOKEN<span class="pl-pds">"</span></span>]; <span class="pl-c"><span class="pl-c">//</span> getbasic.linkxxxxxxxxxxx </span>
  [API setRealUdidMode:<span class="pl-c1">true</span>];   <span class="pl-c"><span class="pl-c">//</span> true: Real UDID | false: Fake UDID</span>

  [API paid:^{
      <span class="pl-c"><span class="pl-c">//</span> NSLog(@"Executing actions after login success");</span>
      <span class="pl-c"><span class="pl-c">//</span> [API showMessage:@"Basic Key" message:@"Start mod menu theos" shouldExit:NO];</span>
  }];
}

%ctor {
  <span class="pl-c1">CFNotificationCenterAddObserver</span>(<span class="pl-c1">CFNotificationCenterGetLocalCenter</span>(), <span class="pl-c1">NULL</span>, &amp;didFinishLaunching, (CFStringRef)UIApplicationDidFinishLaunchingNotification, <span class="pl-c1">NULL</span>, CFNotificationSuspensionBehaviorDeliverImmediately);
}
</pre><div class="zeroclipboard-container">
    <clipboard-copy aria-label="Copy" class="ClipboardButton btn btn-invisible js-clipboard-copy m-2 p-0 d-flex flex-justify-center flex-items-center" data-copy-feedback="Copied!" data-tooltip-direction="w" value="#import &quot;API/BasicKey.h&quot;
#import &quot;Obfuscate.h&quot;
#define timer(sec) dispatch_after(dispatch_time(DISPATCH_TIME_NOW, sec * NSEC_PER_SEC), dispatch_get_main_queue(), ^

static void didFinishLaunching(CFNotificationCenterRef center, void *observer, CFStringRef name, const void *object, CFDictionaryRef info) {
  BasicKey *API = [[BasicKey alloc] init];
  [API setToken:@&quot;YOUR_TOKEN&quot;]; // getbasic.linkxxxxxxxxxxx 
  [API setRealUdidMode:true];   // true: Real UDID | false: Fake UDID

  [API paid:^{
      // NSLog(@&quot;Executing actions after login success&quot;);
      // [API showMessage:@&quot;Basic Key&quot; message:@&quot;Start mod menu theos&quot; shouldExit:NO];
  }];
}

%ctor {
  CFNotificationCenterAddObserver(CFNotificationCenterGetLocalCenter(), NULL, &amp;didFinishLaunching, (CFStringRef)UIApplicationDidFinishLaunchingNotification, NULL, CFNotificationSuspensionBehaviorDeliverImmediately);
}
" tabindex="0" role="button">
      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-copy js-clipboard-copy-icon">
    <path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path>
</svg>
      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check js-clipboard-check-icon color-fg-success d-none">
    <path d="M13.78 4.22a.75.75 0 0 1 0 1.06l-7.25 7.25a.75.75 0 0 1-1.06 0L2.22 9.28a.751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018L6 10.94l6.72-6.72a.75.75 0 0 1 1.06 0Z"></path>
</svg>
    </clipboard-copy>
  </div></div>
<ul dir="auto">
<li>Chạy lệnh để build .framwork (sử dụng Makefile hiện tại) hoặc .dylib (đổi tên file Makefile_dylib thành Makefile trước khi build)</li>
</ul>
<div class="highlight highlight-source-c++ notranslate position-relative overflow-auto" dir="auto"><pre>make clean package</pre><div class="zeroclipboard-container">
    <clipboard-copy aria-label="Copy" class="ClipboardButton btn btn-invisible js-clipboard-copy m-2 p-0 d-flex flex-justify-center flex-items-center" data-copy-feedback="Copied!" data-tooltip-direction="w" value="make clean package" tabindex="0" role="button">
      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-copy js-clipboard-copy-icon">
    <path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path>
</svg>
      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check js-clipboard-check-icon color-fg-success d-none">
    <path d="M13.78 4.22a.75.75 0 0 1 0 1.06l-7.25 7.25a.75.75 0 0 1-1.06 0L2.22 9.28a.751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018L6 10.94l6.72-6.72a.75.75 0 0 1 1.06 0Z"></path>
</svg>
    </clipboard-copy>
  </div></div>
<p dir="auto">Lưu ý: hiện tại chỉ hỗ trợ make trên macOS. (supported on platforms using the legacy runtime).</p>
<div class="markdown-heading" dir="auto"><h1 tabindex="-1" class="heading-element" dir="auto">ScreenShots</h1><a id="user-content-screenshots" class="anchor" aria-label="Permalink: ScreenShots" href="#screenshots"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<markdown-accessiblity-table data-catalyst=""><table>
<thead>
<tr>
<th align="center">Style</th>
<th align="center">Image</th>
<th align="center">Image</th>
</tr>
</thead>
<tbody>
<tr>
<td align="center">Alert</td>
<td align="center"><a target="_blank" rel="noopener noreferrer" href="https://private-user-images.githubusercontent.com/9583479/358607248-4db62396-536a-4100-8d96-fd7d159cb508.PNG?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTM2NzQ1NjYsIm5iZiI6MTc1MzY3NDI2NiwicGF0aCI6Ii85NTgzNDc5LzM1ODYwNzI0OC00ZGI2MjM5Ni01MzZhLTQxMDAtOGQ5Ni1mZDdkMTU5Y2I1MDguUE5HP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI1MDcyOCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNTA3MjhUMDM0NDI2WiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9MDU2NjYzMzA0YjI4N2MyMjM3Y2U1YjUzZDVjZWU5ZWFlNmEwMjg0M2QyMmVlZGRjMGJkOTUyODljNTM1NTgwZSZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.94NoOEsdNZMun7kIXWE4M5IHVUfVY9M-WiQeu43lRsM"><img src="https://private-user-images.githubusercontent.com/9583479/358607248-4db62396-536a-4100-8d96-fd7d159cb508.PNG?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTM2NzQ1NjYsIm5iZiI6MTc1MzY3NDI2NiwicGF0aCI6Ii85NTgzNDc5LzM1ODYwNzI0OC00ZGI2MjM5Ni01MzZhLTQxMDAtOGQ5Ni1mZDdkMTU5Y2I1MDguUE5HP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI1MDcyOCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNTA3MjhUMDM0NDI2WiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9MDU2NjYzMzA0YjI4N2MyMjM3Y2U1YjUzZDVjZWU5ZWFlNmEwMjg0M2QyMmVlZGRjMGJkOTUyODljNTM1NTgwZSZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.94NoOEsdNZMun7kIXWE4M5IHVUfVY9M-WiQeu43lRsM" width="300" style="max-width: 100%;"></a></td>
<td align="center"><a target="_blank" rel="noopener noreferrer" href="https://private-user-images.githubusercontent.com/9583479/358607246-caef0062-ab40-45f6-bfc8-e112eaca4bc4.PNG?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTM2NzQ1NjYsIm5iZiI6MTc1MzY3NDI2NiwicGF0aCI6Ii85NTgzNDc5LzM1ODYwNzI0Ni1jYWVmMDA2Mi1hYjQwLTQ1ZjYtYmZjOC1lMTEyZWFjYTRiYzQuUE5HP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI1MDcyOCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNTA3MjhUMDM0NDI2WiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9N2FiMjliZTc0MmU3ZDcxZDE1Y2VmOTYyNjhhMGNiMzU1MjAxOTJlMTIyYTVlZTEzNDY3ZGZmOGZhZTYyNGQ4ZCZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.945G9kckFBV3p0qDXTAmjGlG_sqKJMc0nmH1SgYVNm4"><img src="https://private-user-images.githubusercontent.com/9583479/358607246-caef0062-ab40-45f6-bfc8-e112eaca4bc4.PNG?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTM2NzQ1NjYsIm5iZiI6MTc1MzY3NDI2NiwicGF0aCI6Ii85NTgzNDc5LzM1ODYwNzI0Ni1jYWVmMDA2Mi1hYjQwLTQ1ZjYtYmZjOC1lMTEyZWFjYTRiYzQuUE5HP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI1MDcyOCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNTA3MjhUMDM0NDI2WiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9N2FiMjliZTc0MmU3ZDcxZDE1Y2VmOTYyNjhhMGNiMzU1MjAxOTJlMTIyYTVlZTEzNDY3ZGZmOGZhZTYyNGQ4ZCZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.945G9kckFBV3p0qDXTAmjGlG_sqKJMc0nmH1SgYVNm4" width="300" style="max-width: 100%;"></a></td>
</tr>
<tr>
<td align="center">Progress</td>
<td align="center"><a target="_blank" rel="noopener noreferrer" href="https://private-user-images.githubusercontent.com/9583479/358607242-77e462d2-8ca8-4bcc-b1a7-dbca14981300.PNG?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTM2NzQ1NjYsIm5iZiI6MTc1MzY3NDI2NiwicGF0aCI6Ii85NTgzNDc5LzM1ODYwNzI0Mi03N2U0NjJkMi04Y2E4LTRiY2MtYjFhNy1kYmNhMTQ5ODEzMDAuUE5HP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI1MDcyOCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNTA3MjhUMDM0NDI2WiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9OTU1NTk3OTg4NWUzMWQyZDJjZGE1NjY4MGUxYzZjN2Y1YTE2Mjg3ZDg3NzdmMWM4NDJjZmYwYmE4NmNiYzgyNiZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.w-ct__KGkAUGqfdNd6BCM25yEn3xyaQSyk8DJ_byIiY"><img src="https://private-user-images.githubusercontent.com/9583479/358607242-77e462d2-8ca8-4bcc-b1a7-dbca14981300.PNG?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTM2NzQ1NjYsIm5iZiI6MTc1MzY3NDI2NiwicGF0aCI6Ii85NTgzNDc5LzM1ODYwNzI0Mi03N2U0NjJkMi04Y2E4LTRiY2MtYjFhNy1kYmNhMTQ5ODEzMDAuUE5HP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI1MDcyOCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNTA3MjhUMDM0NDI2WiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9OTU1NTk3OTg4NWUzMWQyZDJjZGE1NjY4MGUxYzZjN2Y1YTE2Mjg3ZDg3NzdmMWM4NDJjZmYwYmE4NmNiYzgyNiZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.w-ct__KGkAUGqfdNd6BCM25yEn3xyaQSyk8DJ_byIiY" width="300" style="max-width: 100%;"></a></td>
<td align="center"><a target="_blank" rel="noopener noreferrer" href="https://private-user-images.githubusercontent.com/9583479/358607242-77e462d2-8ca8-4bcc-b1a7-dbca14981300.PNG?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTM2NzQ1NjYsIm5iZiI6MTc1MzY3NDI2NiwicGF0aCI6Ii85NTgzNDc5LzM1ODYwNzI0Mi03N2U0NjJkMi04Y2E4LTRiY2MtYjFhNy1kYmNhMTQ5ODEzMDAuUE5HP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI1MDcyOCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNTA3MjhUMDM0NDI2WiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9OTU1NTk3OTg4NWUzMWQyZDJjZGE1NjY4MGUxYzZjN2Y1YTE2Mjg3ZDg3NzdmMWM4NDJjZmYwYmE4NmNiYzgyNiZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.w-ct__KGkAUGqfdNd6BCM25yEn3xyaQSyk8DJ_byIiY"><img src="https://private-user-images.githubusercontent.com/9583479/358607242-77e462d2-8ca8-4bcc-b1a7-dbca14981300.PNG?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTM2NzQ1NjYsIm5iZiI6MTc1MzY3NDI2NiwicGF0aCI6Ii85NTgzNDc5LzM1ODYwNzI0Mi03N2U0NjJkMi04Y2E4LTRiY2MtYjFhNy1kYmNhMTQ5ODEzMDAuUE5HP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI1MDcyOCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNTA3MjhUMDM0NDI2WiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9OTU1NTk3OTg4NWUzMWQyZDJjZGE1NjY4MGUxYzZjN2Y1YTE2Mjg3ZDg3NzdmMWM4NDJjZmYwYmE4NmNiYzgyNiZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.w-ct__KGkAUGqfdNd6BCM25yEn3xyaQSyk8DJ_byIiY" width="300" style="max-width: 100%;"></a></td>
</tr>
<tr>
<td align="center">Menu key</td>
<td align="center"><a target="_blank" rel="noopener noreferrer" href="https://private-user-images.githubusercontent.com/9583479/358607239-054fea0b-bba3-4b22-b3ad-893a81aadf3d.PNG?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTM2NzQ1NjYsIm5iZiI6MTc1MzY3NDI2NiwicGF0aCI6Ii85NTgzNDc5LzM1ODYwNzIzOS0wNTRmZWEwYi1iYmEzLTRiMjItYjNhZC04OTNhODFhYWRmM2QuUE5HP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI1MDcyOCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNTA3MjhUMDM0NDI2WiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9MGU3MmRhYTc2MDJmMDA5N2NjM2U4ZGVhOTBiYjZhNzZhZjJhMWY1NTJhNzgxMmM2MTQxNTI0OTg2YjQ3MmFkZSZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.pS_LP-c3uztTHmjl9rnL6Hxy4LGZ2-tILTyE_azKRrI"><img src="https://private-user-images.githubusercontent.com/9583479/358607239-054fea0b-bba3-4b22-b3ad-893a81aadf3d.PNG?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTM2NzQ1NjYsIm5iZiI6MTc1MzY3NDI2NiwicGF0aCI6Ii85NTgzNDc5LzM1ODYwNzIzOS0wNTRmZWEwYi1iYmEzLTRiMjItYjNhZC04OTNhODFhYWRmM2QuUE5HP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI1MDcyOCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNTA3MjhUMDM0NDI2WiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9MGU3MmRhYTc2MDJmMDA5N2NjM2U4ZGVhOTBiYjZhNzZhZjJhMWY1NTJhNzgxMmM2MTQxNTI0OTg2YjQ3MmFkZSZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.pS_LP-c3uztTHmjl9rnL6Hxy4LGZ2-tILTyE_azKRrI" width="300" style="max-width: 100%;"></a></td>
<td align="center"><a target="_blank" rel="noopener noreferrer" href="https://private-user-images.githubusercontent.com/9583479/358607228-e5ac5b98-a533-4add-a72a-77758b677962.PNG?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTM2NzQ1NjYsIm5iZiI6MTc1MzY3NDI2NiwicGF0aCI6Ii85NTgzNDc5LzM1ODYwNzIyOC1lNWFjNWI5OC1hNTMzLTRhZGQtYTcyYS03Nzc1OGI2Nzc5NjIuUE5HP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI1MDcyOCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNTA3MjhUMDM0NDI2WiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9M2U5MzBmYzY3NzZjNTI3YjJiZjlhZTAxNDM3NGZkZjM1ZGUxNjE0NmIyYzEwM2ZkZjQ1ZDFhZWVhODYxMGY0NyZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.ZRI0QgXhp8cVPXwRwAZ47jjrc6P_RPTgOqdqekBlzNw"><img src="https://private-user-images.githubusercontent.com/9583479/358607228-e5ac5b98-a533-4add-a72a-77758b677962.PNG?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTM2NzQ1NjYsIm5iZiI6MTc1MzY3NDI2NiwicGF0aCI6Ii85NTgzNDc5LzM1ODYwNzIyOC1lNWFjNWI5OC1hNTMzLTRhZGQtYTcyYS03Nzc1OGI2Nzc5NjIuUE5HP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI1MDcyOCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNTA3MjhUMDM0NDI2WiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9M2U5MzBmYzY3NzZjNTI3YjJiZjlhZTAxNDM3NGZkZjM1ZGUxNjE0NmIyYzEwM2ZkZjQ1ZDFhZWVhODYxMGY0NyZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.ZRI0QgXhp8cVPXwRwAZ47jjrc6P_RPTgOqdqekBlzNw" width="300" style="max-width: 100%;"></a></td>
</tr>
</tbody>
</table></markdown-accessiblity-table>
<div class="markdown-heading" dir="auto"><h1 tabindex="-1" class="heading-element" dir="auto">Tác Giả BasicKey</h1><a id="user-content-tác-giả-basickey" class="anchor" aria-label="Permalink: Tác Giả BasicKey" href="#tác-giả-basickey"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<p dir="auto">Copyright By <a href="https://t.me/kennguyen02" rel="nofollow">Ken Nguyen</a></p>
</article></div></div></div></div></div>   <script type="application/json" id="__PRIMER_DATA_:r2r:__">{"resolvedServerColorMode":"night"}</script></div>
</react-partial>

      <input type="hidden" value="cx2tNxxw0YbA9m7ni28sLG9By2nj2GIOhzSZ8CP9Kl_4Ca0P7ng4ZcfS7-vWcSoyaiGb64RJh7No1ucwvuLd9Q" data-csrf="true" id="react-codespace-csrf">
</div>
  <div data-view-component="true" class="Layout-sidebar">      

      <div class="BorderGrid about-margin" data-pjax="">
        <div class="BorderGrid-row">
          <div class="BorderGrid-cell">
            <div class="hide-sm hide-md">
  <h2 class="mb-3 h4">About</h2>

      <p class="f4 my-3">
        Server Key một sản phẩm của GetBasic.link
      </p>


    <h3 class="sr-only">Resources</h3>
    <div class="mt-2">
      <a class="Link--muted" data-analytics-event="{&quot;category&quot;:&quot;Repository Overview&quot;,&quot;action&quot;:&quot;click&quot;,&quot;label&quot;:&quot;location:sidebar;file:readme&quot;}" href="#readme-ov-file">
        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-book mr-2">
    <path d="M0 1.75A.75.75 0 0 1 .75 1h4.253c1.227 0 2.317.59 3 1.501A3.743 3.743 0 0 1 11.006 1h4.245a.75.75 0 0 1 .75.75v10.5a.75.75 0 0 1-.75.75h-4.507a2.25 2.25 0 0 0-1.591.659l-.622.621a.75.75 0 0 1-1.06 0l-.622-.621A2.25 2.25 0 0 0 5.258 13H.75a.75.75 0 0 1-.75-.75Zm7.251 10.324.004-5.073-.002-2.253A2.25 2.25 0 0 0 5.003 2.5H1.5v9h3.757a3.75 3.75 0 0 1 1.994.574ZM8.755 4.75l-.004 7.322a3.752 3.752 0 0 1 1.992-.572H14.5v-9h-3.495a2.25 2.25 0 0 0-2.25 2.25Z"></path>
</svg>
        Readme
</a>    </div>

  



  <include-fragment src="/nduykhanh/basic-key/hovercards/citation/sidebar_partial?tree_name=main" data-nonce="v2:e19d43ec-b6e6-a51e-e886-a34822fa3879" data-view-component="true" class="is-error">
  

  <div data-show-on-forbidden-error="" hidden="">
    <div class="Box">
  <div class="blankslate-container">
    <div data-view-component="true" class="blankslate blankslate-spacious color-bg-default rounded-2">
      

      <h3 data-view-component="true" class="blankslate-heading">        Uh oh!
</h3>
      <p data-view-component="true">        </p><p class="color-fg-muted my-2 mb-2 ws-normal">There was an error while loading. <a class="Link--inTextBlock" data-turbo="false" href="" aria-label="Please reload this page">Please reload this page</a>.</p>
<p></p>

</div>  </div>
</div>  </div>
</include-fragment>
  <div class="mt-2">
    <a href="/nduykhanh/basic-key/activity" data-view-component="true" class="Link Link--muted"><svg text="gray" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-pulse mr-2">
    <path d="M6 2c.306 0 .582.187.696.471L10 10.731l1.304-3.26A.751.751 0 0 1 12 7h3.25a.75.75 0 0 1 0 1.5h-2.742l-1.812 4.528a.751.751 0 0 1-1.392 0L6 4.77 4.696 8.03A.75.75 0 0 1 4 8.5H.75a.75.75 0 0 1 0-1.5h2.742l1.812-4.529A.751.751 0 0 1 6 2Z"></path>
</svg>
      <span class="color-fg-muted">Activity</span></a>  </div>


  <h3 class="sr-only">Stars</h3>
  <div class="mt-2">
    <a href="/nduykhanh/basic-key/stargazers" data-view-component="true" class="Link Link--muted"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-star mr-2">
    <path d="M8 .25a.75.75 0 0 1 .673.418l1.882 3.815 4.21.612a.75.75 0 0 1 .416 1.279l-3.046 2.97.719 4.192a.751.751 0 0 1-1.088.791L8 12.347l-3.766 1.98a.75.75 0 0 1-1.088-.79l.72-4.194L.818 6.374a.75.75 0 0 1 .416-1.28l4.21-.611L7.327.668A.75.75 0 0 1 8 .25Zm0 2.445L6.615 5.5a.75.75 0 0 1-.564.41l-3.097.45 2.24 2.184a.75.75 0 0 1 .216.664l-.528 3.084 2.769-1.456a.75.75 0 0 1 .698 0l2.77 1.456-.53-3.084a.75.75 0 0 1 .216-.664l2.24-2.183-3.096-.45a.75.75 0 0 1-.564-.41L8 2.694Z"></path>
</svg>
      <strong>0</strong>
      stars</a>  </div>

  <h3 class="sr-only">Watchers</h3>
  <div class="mt-2">
    <a href="/nduykhanh/basic-key/watchers" data-view-component="true" class="Link Link--muted"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-eye mr-2">
    <path d="M8 2c1.981 0 3.671.992 4.933 2.078 1.27 1.091 2.187 2.345 2.637 3.023a1.62 1.62 0 0 1 0 1.798c-.45.678-1.367 1.932-2.637 3.023C11.67 13.008 9.981 14 8 14c-1.981 0-3.671-.992-4.933-2.078C1.797 10.83.88 9.576.43 8.898a1.62 1.62 0 0 1 0-1.798c.45-.677 1.367-1.931 2.637-3.022C4.33 2.992 6.019 2 8 2ZM1.679 7.932a.12.12 0 0 0 0 .136c.411.622 1.241 1.75 2.366 2.717C5.176 11.758 6.527 12.5 8 12.5c1.473 0 2.825-.742 3.955-1.715 1.124-.967 1.954-2.096 2.366-2.717a.12.12 0 0 0 0-.136c-.412-.621-1.242-1.75-2.366-2.717C10.824 4.242 9.473 3.5 8 3.5c-1.473 0-2.825.742-3.955 1.715-1.124.967-1.954 2.096-2.366 2.717ZM8 10a2 2 0 1 1-.001-3.999A2 2 0 0 1 8 10Z"></path>
</svg>
      <strong>1</strong>
      watching</a>  </div>

  <h3 class="sr-only">Forks</h3>
  <div class="mt-2">
    <a href="/nduykhanh/basic-key/forks" data-view-component="true" class="Link Link--muted"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-repo-forked mr-2">
    <path d="M5 5.372v.878c0 .414.336.75.75.75h4.5a.75.75 0 0 0 .75-.75v-.878a2.25 2.25 0 1 1 1.5 0v.878a2.25 2.25 0 0 1-2.25 2.25h-1.5v2.128a2.251 2.251 0 1 1-1.5 0V8.5h-1.5A2.25 2.25 0 0 1 3.5 6.25v-.878a2.25 2.25 0 1 1 1.5 0ZM5 3.25a.75.75 0 1 0-1.5 0 .75.75 0 0 0 1.5 0Zm6.75.75a.75.75 0 1 0 0-1.5.75.75 0 0 0 0 1.5Zm-3 8.75a.75.75 0 1 0-1.5 0 .75.75 0 0 0 1.5 0Z"></path>
</svg>
      <strong>0</strong>
      forks</a>  </div>


    <div class="mt-2">
      <a class="Link--muted" href="/contact/report-content?content_url=https%3A%2F%2Fgithub.com%2Fnduykhanh%2Fbasic-key&amp;report=nduykhanh+%28user%29">
          Report repository
</a>    </div>
</div>

          </div>
        </div>

        
            <div class="BorderGrid-row">
              <div class="BorderGrid-cell">
                <h2 class="h4 mb-3" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame">
  <a href="/nduykhanh/basic-key/releases" data-view-component="true" class="Link--primary no-underline Link" data-turbo-frame="repo-content-turbo-frame">Releases
      <span title="3" data-view-component="true" class="Counter">3</span></a></h2>

  <a class="Link--primary d-flex no-underline" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" href="/nduykhanh/basic-key/releases/tag/v2.0.0">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-tag flex-shrink-0 mt-1 color-fg-success">
    <path d="M1 7.775V2.75C1 1.784 1.784 1 2.75 1h5.025c.464 0 .91.184 1.238.513l6.25 6.25a1.75 1.75 0 0 1 0 2.474l-5.026 5.026a1.75 1.75 0 0 1-2.474 0l-6.25-6.25A1.752 1.752 0 0 1 1 7.775Zm1.5 0c0 .066.026.13.073.177l6.25 6.25a.25.25 0 0 0 .354 0l5.025-5.025a.25.25 0 0 0 0-.354l-6.25-6.25a.25.25 0 0 0-.177-.073H2.75a.25.25 0 0 0-.25.25ZM6 5a1 1 0 1 1 0 2 1 1 0 0 1 0-2Z"></path>
</svg>
    <div class="ml-2 min-width-0">
      <div class="d-flex">
        <span class="css-truncate css-truncate-target text-bold mr-2" style="max-width: none;">v2.0.0</span>
        <span title="Label: Latest" data-view-component="true" class="Label Label--success flex-shrink-0">
          Latest
</span>      </div>
      <div class="text-small color-fg-muted"><relative-time datetime="2025-02-06T02:25:07Z" class="no-wrap" title="Feb 6, 2025, 9:25 AM GMT+7">Feb 6, 2025</relative-time></div>
    </div>
</a>    <div data-view-component="true" class="mt-3">
      <a text="small" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" href="/nduykhanh/basic-key/releases" data-view-component="true" class="Link">+ 2 releases</a></div>
              </div>
            </div>

        
        
            <div class="BorderGrid-row">
              <div class="BorderGrid-cell">
                
  <h2 class="h4 mb-3">
  <a href="/users/nduykhanh/packages?repo_name=basic-key" data-view-component="true" class="Link--primary no-underline Link d-flex flex-items-center">Packages
      <span title="0" hidden="hidden" data-view-component="true" class="Counter ml-1">0</span></a></h2>


      <div class="text-small color-fg-muted">
        No packages published <br>
      </div>



              </div>
            </div>

        
        
            <div class="BorderGrid-row">
              <div class="BorderGrid-cell">
                <h2 class="h4 mb-3">
  <a href="/nduykhanh/basic-key/graphs/contributors" data-view-component="true" class="Link--primary no-underline Link d-flex flex-items-center">Contributors
      <span title="2" data-view-component="true" class="Counter ml-1">2</span></a></h2>


    
  <ul class="list-style-none ">
    <li class="mb-2 d-flex">
      <a href="https://github.com/nduykhanh" class="mr-2" data-hovercard-type="user" data-hovercard-url="/users/nduykhanh/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" aria-keyshortcuts="Alt+ArrowUp">
        <img src="https://avatars.githubusercontent.com/u/9583479?s=64&amp;v=4" alt="@nduykhanh" size="32" height="32" width="32" data-view-component="true" class="avatar circle">
      </a>
      <span data-view-component="true" class="flex-self-center min-width-0 css-truncate css-truncate-overflow width-fit flex-auto">
        <a href="https://github.com/nduykhanh" class="Link--primary no-underline flex-self-center">
          <strong>nduykhanh</strong>
          <span class="color-fg-muted">Khanh Nguyen</span>
        </a>
</span>    </li>
    <li class="mb-2 d-flex">
      <a href="https://github.com/khanhnguyenvoy" class="mr-2" data-hovercard-type="user" data-hovercard-url="/users/khanhnguyenvoy/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" aria-keyshortcuts="Alt+ArrowUp">
        <img src="https://avatars.githubusercontent.com/u/106717845?s=64&amp;v=4" alt="@khanhnguyenvoy" size="32" height="32" width="32" data-view-component="true" class="avatar circle">
      </a>
      <span data-view-component="true" class="flex-self-center min-width-0 css-truncate css-truncate-overflow width-fit flex-auto">
        <a href="https://github.com/khanhnguyenvoy" class="Link--primary no-underline flex-self-center">
          <strong>khanhnguyenvoy</strong>
          <span class="color-fg-muted">Khanh Nguyen</span>
        </a>
</span>    </li>
</ul>





              </div>
            </div>

        
        
            <div class="BorderGrid-row">
              <div class="BorderGrid-cell">
                <h2 class="h4 mb-3">Languages</h2>
<div class="mb-2">
  <span data-view-component="true" class="Progress">
    <span style="background-color:#f34b7d !important;;width: 64.0%;" itemprop="keywords" data-view-component="true" class="Progress-item color-bg-success-emphasis"></span>
    <span style="background-color:#427819 !important;;width: 15.3%;" itemprop="keywords" data-view-component="true" class="Progress-item color-bg-success-emphasis"></span>
    <span style="background-color:#ccc !important;;width: 10.4%;" itemprop="keywords" data-view-component="true" class="Progress-item color-bg-success-emphasis"></span>
    <span style="background-color:#438eff !important;;width: 10.3%;" itemprop="keywords" data-view-component="true" class="Progress-item color-bg-success-emphasis"></span>
</span></div>
<ul class="list-style-none">
    <li class="d-inline">
        <a class="d-inline-flex flex-items-center flex-nowrap Link--secondary no-underline text-small mr-3" href="/nduykhanh/basic-key/search?l=c%2B%2B" data-ga-click="Repository, language stats search click, location:repo overview">
          <svg style="color:#f34b7d;" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-dot-fill mr-2">
    <path d="M8 4a4 4 0 1 1 0 8 4 4 0 0 1 0-8Z"></path>
</svg>
          <span class="color-fg-default text-bold mr-1">C++</span>
          <span>64.0%</span>
        </a>
    </li>
    <li class="d-inline">
        <a class="d-inline-flex flex-items-center flex-nowrap Link--secondary no-underline text-small mr-3" href="/nduykhanh/basic-key/search?l=makefile" data-ga-click="Repository, language stats search click, location:repo overview">
          <svg style="color:#427819;" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-dot-fill mr-2">
    <path d="M8 4a4 4 0 1 1 0 8 4 4 0 0 1 0-8Z"></path>
</svg>
          <span class="color-fg-default text-bold mr-1">Makefile</span>
          <span>15.3%</span>
        </a>
    </li>
    <li class="d-inline">
        <a class="d-inline-flex flex-items-center flex-nowrap Link--secondary no-underline text-small mr-3" href="/nduykhanh/basic-key/search?l=logos" data-ga-click="Repository, language stats search click, location:repo overview">
          <svg style="color:#ccc;" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-dot-fill mr-2">
    <path d="M8 4a4 4 0 1 1 0 8 4 4 0 0 1 0-8Z"></path>
</svg>
          <span class="color-fg-default text-bold mr-1">Logos</span>
          <span>10.4%</span>
        </a>
    </li>
    <li class="d-inline">
        <a class="d-inline-flex flex-items-center flex-nowrap Link--secondary no-underline text-small mr-3" href="/nduykhanh/basic-key/search?l=objective-c" data-ga-click="Repository, language stats search click, location:repo overview">
          <svg style="color:#438eff;" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-dot-fill mr-2">
    <path d="M8 4a4 4 0 1 1 0 8 4 4 0 0 1 0-8Z"></path>
</svg>
          <span class="color-fg-default text-bold mr-1">Objective-C</span>
          <span>10.3%</span>
        </a>
    </li>
</ul>

              </div>
            </div>

              </div>
</div>
  
</div></div>

  </div>


  </div>

</turbo-frame>


    </main>
  </div>

  </div>
