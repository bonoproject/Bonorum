BonorumCoin version 3.0.2 is now available from:

  <https://github.com/bonorumcoin-project/bonorumcoin/releases>

This is a new minor-revision version release, including various bug fixes and
performance improvements, as well as updated translations.

Please report bugs using the issue tracker at github:

  <https://github.com/bonorumcoin-project/bonorumcoin/issues>

Recommended Update
==============

BonorumCoin v3.0.2 is a recommended, semi-mandatory update for all users. This release contains transaction creation bug fixes for zBONO spends, automint calculation adjustments, and other various updates/fixes.

zBONO spending requires this update.

How to Upgrade
==============

If you are running an older version, shut it down. Wait until it has completely shut down (which might take a few minutes for older versions), then run the installer (on Windows) or just copy over /Applications/BonorumCoin-Qt (on Mac) or bonorumcoind/bonorumcoin-qt (on Linux).

Compatibility
==============

BonorumCoin is extensively tested on multiple operating systems using
the Linux kernel, macOS 10.8+, and Windows Vista and later.

Microsoft ended support for Windows XP on [April 8th, 2014](https://www.microsoft.com/en-us/WindowsForBusiness/end-of-xp-support),
No attempt is made to prevent installing or running the software on Windows XP, you
can still do so at your own risk but be aware that there are known instabilities and issues.
Please do not report issues about Windows XP to the issue tracker.

BonorumCoin should also work on most other Unix-like systems but is not
frequently tested on them.

### :exclamation::exclamation::exclamation: MacOS 10.13 High Sierra :exclamation::exclamation::exclamation:

**Currently there are issues with the 3.0.x gitian releases on MacOS version 10.13 (High Sierra), no reports of issues on older versions of MacOS.**


Notable Changes
===============

RPC Changes
---------------------
The `bip38decrypt` command has had it's parameter order changed to be more consistent with it's counterpart. The command now expects the BonorumCoin address as it's first parameter and the passphrase as it's second parameter.

Bip38 Compatibility With 3rd Party Tools
---------------------
The in-wallet bip38 encryption method was leaving the final 4 bytes of the encrypted key blank. This caused an incompatibility issue with 3rd party tools like the paper wallet generators that could decrypt bip38 encrypted keys. Cross-tool compatibility has now been restored.

3.0.2 Change log
=================

Detailed release notes follow. This overview includes changes that affect
behavior, not code moves, refactors and string updates. For convenience in locating
the code changes and accompanying discussion, both the pull request and
git merge commit are mentioned.

### RPC and other APIs
- #275 `059aaa9` [RPC] Change Parameter Order of bip38decrypt (presstab)

### P2P Protocol and Network Code
- #286 `85c0f53` [Main] Change sporkDB from smart ptr to ptr. (presstab)
- #292 `feadab4` Additional checks for double spending of zBono serials. (presstab)

### Wallet
- #271 `5e9a086` [Wallet] Remove unused member wallet in UnlockContext inner class (Jon Spock)

### GUI
- #268 `bc63f24` [GUI/RPC] Changed bubblehelp text + RPC startmasternode help text fixed (Mrs-X)
- #269 `5466a9b` Check if model is valid before using in transactionView (Jon Spock)
- #270 `bd2328e` [Qt] Make lock icon clickable to toggle wallet lock state (Fuzzbawls)
- #273 `f31136e` [Qt] Fix UI tab order and shortcuts (Mrs-X)
- #287 `74a1c3c` [Qt] Don't allow the Esc key to close the privacy tab (Fuzzbawls)
- #291 `cb314e6` [Qt] zBono control quantity/amount fixes (rejectedpromise)

### Miscellaneous
- #266 `2d97b54` [Scripts] Fix location for aarch64 outputs in gitian-build.sh (Fuzzbawls)
- #272 `958f51e` [Minting] Replace deprecated auto_ptr. (presstab)
- #276 `03f14ba` Append BIP38 encrypted key with an 4 byte Base58 Checksum (presstab)
- #288 `2522aa1` Bad CBlockHeader copy. (furszy)

Credits
=======

Thanks to everyone who directly contributed to this release:
- Fuzzbawls
- Jon Spock
- Mrs-X
- furszy
- presstab
- rejectedpromise
- Warrows

As well as everyone that helped translating on [Transifex](https://www.transifex.com/projects/p/bonorumcoin-project-translations/).
